#########################################################
#
# Example to setup environment parameters for bash
#
#########################################################
export ROOTSYS=/proj/soft/Release/1.04/root
export LCBASEDIR=/home/miyamoto/soft/LC/lcbase

export PATH=$PATH:$LCBASEDIR/bin:$ROOTSYS/bin
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOTSYS/lib
export IMAKEINCLUDE=-I$LCBASEDIR

