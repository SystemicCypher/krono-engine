#include "event.h"
#include <string>
#include <map>
#include <utility>

class Timeline{
public:
// The timeline constructor
// It creates a timeline object 
// that has a l
	Timeline();

// takes in an index to a byte - returns the byte's interpretation
// basically returning the flag definition
	std::string flag_status(size_t byte_index);
	std::string flag_status(size_t byte_index, size_t bit_index);
       	std::string flag_status(size_t byte_index, size_t bit_index_start, size_t bit_index_end);

// The timeline is being changed in some capacity, this changes some flags
	bool timeline_change(size_t byte_index, size_t bit_index_start, size_t bit_index_end);	

private:
// The linking of bits in the flag array to actual definitions
// E.g bits 1 to 3 are 
	std::map<std::pair<size_t, size_t>, std::string> flag_definitions;

// An array of bits for flags
// It's intended to have a few events that it encodes.
// The structure is yet to be defined
	char* flags;

// A vector of history objects (Events)
// This is what the present state of the timeline is
	vector<Event> history;
};
