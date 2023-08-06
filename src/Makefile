include ../makeinclude

CPPFILES =\
	main.cxx grs-window.cxx
ALL =	\
	grs$(EXEEXT) 


all:	$(ALL)

clean:
	$(RM) $(ALL) core extra.o main.o

extra.o : grs-window.cxx
	$(CXX) -I.. $(ARCHFLAGS) $(CXXFLAGS) -c grs-window.cxx -o extra.o

main.o : main.cxx
	$(CXX) -I.. $(ARCHFLAGS) $(CXXFLAGS) -c main.cxx -o main.o

grs$(EXEEXT): extra.o main.o
	echo Linking $@...
	$(CXX) -I.. $(ARCHFLAGS) $(CXXFLAGS) $(LDFLAGS) -o $@ main.o extra.o $(LINKFLTKGL) $(LINKFLTK) $(GLDLIBS)
	$(OSX_ONLY) /Users/1002864/fltk-1.3.8/fltk-config --post $@


