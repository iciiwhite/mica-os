#include "weather.h"
#include "http.h"
void weather_run(void) { char *data=http_get("http://api.weather.com"); (void)data; }