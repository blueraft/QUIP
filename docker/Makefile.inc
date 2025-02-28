# Place to override setting elsewhere, in particular things set in Makefile.linux_x86_64_gfortran
# look in QUIP/arch/Makefile.linux_x86_64_gfortran for defaults set by arch
# 
# F77=gfortran
# F90=gfortran
# F95=gfortran
# CC=gcc
# CPLUSPLUS=g++
# FPP=gfortran -E -x f95-cpp-input
# LINKER=gfortran
# LIBTOOL=
# OPTIM=
# COPTIM=
# DEBUG=-O0 -g -DDUMP_CORE_ON_ABORT -DDEBUG -fbounds-check
# DEBUG=
# CDEBUG=
MATH_LINKOPTS=-llapack -lblas
PYTHON=python
PIP=pip
EXTRA_LINKOPTS=
USE_MAKEDEP=0
MAKEDEP=makedep.py
HAVE_CP2K=1
HAVE_VASP=1
HAVE_TB=1
HAVE_PRECON=1
HAVE_LOTF=1
HAVE_ONIOM=1
HAVE_LOCAL_E_MIX=1
HAVE_QC=1
HAVE_GAP=1
HAVE_DESCRIPTORS_EXTERNAL=1
HAVE_QR=1
HAVE_THIRDPARTY=0
HAVE_FX=0
HAVE_SCME=0
HAVE_MTP=0
HAVE_MBD=0
HAVE_TTM_NF=0
HAVE_CH4=0
NETCDF4_LIBS=-lnetcdf
NETCDF4_FLAGS=
HAVE_NETCDF4=1
HAVE_MDCORE=0
HAVE_ASAP=0
HAVE_CGAL=0
HAVE_METIS=0
HAVE_LMTO_TBE=0
SIZEOF_FORTRAN_T=2
