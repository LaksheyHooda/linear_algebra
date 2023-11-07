linkTarget = linear_algebra

CXX = g++
CFLAGS = -std=c++17

sources = main.cpp \
          ./src/vector3d.cpp
objects = $(patsubst %.cpp,%.o,$(sources))

# Define the rebuildables.
# rebuildables = $(objects) $(linkTarget)

# Rule to actually perform the build.
$(linkTarget): $(objects)
	g++ -g -o $(linkTarget) $(objects) $(LIBS) $(CFLAGS)
	
# Rule to create the .o files.
%.o: %.cpp
	g++ -o $@ -c $< $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(linkTarget) $(objects)
