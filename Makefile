
all: 
	(cd bin ; ./configure_lcbase )

distclean:
	rm -f include/LCBASEConfig.h
	rm -f conf/makejsf.tmpl
	rm -f bin/*~ conf/*~



