CXX = g++ -std=c++17
CXXFLAGS = -g -Wall
LINK = -lncurses

TARGET = bin/krono-engine
TEST = bin/test

SRCDIR = src
BUILDDIR = build

SRCEXT = cpp
SOURCES = $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
INC = -I include

.PHONY: all
all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $(TARGET) $(LINK)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	$(CXX) $(CXXFLAGS) $(INC) -c -o $@ $<
clean:
	@echo "Removing garbage...";	
	rm $(TARGET) build/*.o
test:
	$(CXX) $(CXXFLAGS) test/test.cpp $(INC) $(LINK) -o $(TEST)

.PHONY: clean
