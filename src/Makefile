include ../makeinclude

CPPFILES =\
	main.cxx grs-window.cxx grs-objects.cxx grs-GL-drawing.cxx
ALL =	\
	grs$(EXEEXT) 


all:	$(ALL)

clean:
	$(RM) $(ALL) core grs-window.o main.o grs-GL-drawing.o grs-objects.o

grs$(EXEEXT): grs-window.o main.o grs-GL-drawing.o grs-objects.o
	echo Linking $@...
	$(CXX) -I.. $(ARCHFLAGS) $(CXXFLAGS) $(LDFLAGS) -o $@ main.o grs-window.o grs-GL-drawing.o grs-objects.o $(LINKFLTKGL) $(LINKFLTK) $(GLDLIBS)
	$(OSX_ONLY) /Users/1002864/fltk-1.3.8/fltk-config --post $@

grs.o : grs-window.cxx grs-GL-drawing.cxx grs-objects.cxx
	$(CXX) -I.. $(ARCHFLAGS) $(CXXFLAGS) -c grs-window.cxx grs-GL-drawing.cxx grs-objects.cxx -o grs.o
