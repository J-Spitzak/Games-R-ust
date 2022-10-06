
CPPFILES =\
	main.cxx grs-window.cxx
ALL =	\
	grs$(EXEEXT) 


all:	$(ALL)

clean:
	$(RM) $(ALL) core grs.o

grs$(EXEEXT): grs.o
	echo Linking $@...
	$(CXX) $(ARCHFLAGS) $(CXXFLAGS) $(LDFLAGS) -o $@ grs.o $(LINKFLTKGL) $(LINKFLTK) $(GLDLIBS)
	$(OSX_ONLY) /Users/1002864/fltk-1.3.8/fltk-config --post $@

