include ../makeinclude

CPPFILES =\
	main.cxx extra.cxx
ALL =	\
	grs$(EXEEXT) 


all:	$(ALL)

clean:
	$(RM) $(ALL) core extra.o main.o

grs$(EXEEXT): main.o extra.o
	echo Linking $@...
	$(CXX) -I.. $(ARCHFLAGS) $(CXXFLAGS) $(LDFLAGS) -o $@ main.o extra.o $(LINKFLTKGL) $(LINKFLTK) $(GLDLIBS)
	$(OSX_ONLY) /Users/1002864/fltk-1.3.8/fltk-config --post $@

extra.o : extra.cxx
	$(CXX) -I.. $(ARCHFLAGS) $(CXXFLAGS) -c extra.cxx -o extra.o
