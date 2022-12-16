ObjSuf        = o
SrcSuf        = cxx
DllSuf        = so
ExeSuf        =
OutPutOpt     = -o
CXXFLAGS      = -g -Wall -fPIC -DOSF1
CXX           = g++
CCFLAGS       = -g -Wall -DOSF1
CC            = gcc
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -shared

ROOTCFLAGS   := $(shell root-config --cflags) -DFILL_ON_FLY
ROOTGLIBS    := $(shell root-config --glibs)  -lNew -lThread -lMinuit -lPhysics
.SUFFIXES: .$(SrcSuf) .$(ObjSuf)
EVENTO        = AnalysingPowers.$(ObjSuf) AnalysingPowers_fit.$(ObjSuf)
EVENTS        = AnalysingPowers.$(SrcSuf)  AnalysingPowers_fit.$(SrcSuf)


all:	$(EVENTO)
	$(LD) $(ROOTGLIBS) $^ $(OutPutOpt) AnalysingPowers
	@echo "AnalysingPowers done"
	rm list
	./AnalysingPowers >> list
	./ReviewError/SystematicError_130 &
	gle AnalysingPowers.gle 
	gv AnalysingPowers.eps &

clean:
	rm *~ AnalysingPowers  Arun* *.o


SUFFIXES: .$(SrcSuf)

###

.$(SrcSuf).$(ObjSuf):
	$(CXX) $(CXXFLAGS) $(ROOTCFLAGS) -c $<

.c.$(ObjSuf):
	$(CXX) $(CXXFLAGS) $(ROOTCFLAGS) -c $<


