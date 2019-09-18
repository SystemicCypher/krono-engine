#include <vector>
#include "event.h"

class TimePeriod{
public:
    TimePeriod(char* name, char* year);

private:
    std::vector<Event> ocurred; 

};