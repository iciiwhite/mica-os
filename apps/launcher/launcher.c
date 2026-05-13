#include "launcher.h"
#include "menu.h"
#include "dialer.h"
#include "sms.h"
#include "camera_app.h"
#include "fm_radio_app.h"
#include "calculator.h"
#include "torch_app.h"
#include "browser.h"
#include "carlcare.h"
#include "file_manager_app.h"
#include "media_player.h"
#include "image_viewer.h"
#include "notes.h"
#include "settings.h"
#include "mesh_app.h"
#include "calendar.h"
#include "alarm.h"
#include "recorder.h"
#include "stopwatch.h"
#include "worldclock.h"
#include "converter.h"
#include "flashlight.h"
#include "weather.h"
#include "fitness.h"
void launcher_run(void) {
    char *items[] = {"Dialer","SMS","Camera","FM Radio","Calculator","Torch","Browser","Carlcare","Files","Media","Images","Notes","Settings","Mesh","Calendar","Alarm","Recorder","Stopwatch","World Clock","Converter","Flashlight","Weather","Fitness"};
    int choice = menu_run("MICA MENU", items, 23);
    switch(choice) {
        case 0: dialer_run(); break;
        case 1: sms_run(); break;
        case 2: camera_app_run(); break;
        case 3: fm_radio_app(); break;
        case 4: calculator_run(); break;
        case 5: torch_app(); break;
        case 6: browser_run(); break;
        case 7: carlcare_run(); break;
        case 8: file_manager_app(); break;
        case 9: media_player_run(); break;
        case 10: image_viewer_run(); break;
        case 11: notes_run(); break;
        case 12: settings_run(); break;
        case 13: mesh_app(); break;
        case 14: calendar_run(); break;
        case 15: alarm_run(); break;
        case 16: recorder_run(); break;
        case 17: stopwatch_run(); break;
        case 18: worldclock_run(); break;
        case 19: converter_run(); break;
        case 20: flashlight_run(); break;
        case 21: weather_run(); break;
        case 22: fitness_run(); break;
        default: break;
    }
}