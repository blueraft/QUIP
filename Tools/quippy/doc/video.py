"""
Sphinx extension for inserting HTML5 <video> element

James Kermode <james.kermode@gmail.com>
February 2013

This extension defines a 'video' directive which can be used to insert
an HTML5 <video> element into the HTML output. Usage is::

   .. video:: basename width height

where `basename` is the stem of the movie filename: .mp4, .ogv and .webm
versions are expected in the _movies/ directory, and a poster frame named
``%(basename)s-poster.jpg``.
"""

from docutils import nodes, statemachine
from docutils.parsers.rst import directives
from sphinx.util.compat import Directive, directive_dwim

class Video(Directive):

    has_content = False
    required_arguments = 3
    optional_arguments = 0
    final_argument_whitespace = False

    def run(self):
        d = {}
        d['basename'] = self.arguments[0]
        d['width'] = int(self.arguments[1])
        d['height'] = int(self.arguments[2])

        lines = (r""".. raw:: html

    <center>
    <video width="%(width)d" height="%(height)d" controls="controls" poster="_movies/%(basename)s-poster.jpg">
      <source src="_movies/%(basename)s.mp4"  type='video/mp4' />
      <source src="_movies/%(basename)s.ogv"  type='video/ogg; codecs="theora, vorbis"'' />
      <source src="_movies/%(basename)s.webm" type='video/webm; codecs="vp8.0, vorbis"' />
      <p><b>Your browser does not support HTML5 video.
      <a href="_movies/%(basename)s.mp4">Download</a> the video instead.
      </b></p>
    </video>
    </center>
    """ % d).split('\n')
        self.state_machine.insert_input(lines, 'video %(basename)s' % d)
        
        return []

def setup(app):
    app.add_directive('video', Video)
