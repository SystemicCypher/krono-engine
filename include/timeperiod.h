#include <vector>
#include "event.h"

class TimePeriod{
public:
    TimePeriod(char* name, char* year);

    const std::vector<Event> getOcurrences();
    void setOcurrences(const std::vector<Event>& ocurrence);

private:
    std::vector<Event> ocurred; 

};