#include <stdint.h>

struct __attribute__ ((__packed__))  _msp_status
{
    uint16_t cycle_time;
    uint16_t i2c_errors_count;
    uint16_t sensor;
    uint32_t flag;
    uint8_t global_conf;
};
typedef struct _msp_status MSP_STATUS;

struct __attribute__ ((__packed__)) _msp_misc
{
    uint16_t intPowerTrigger1;
    uint16_t conf_minthrottle;
    uint16_t maxthrottle;
    uint16_t mincommand;
    uint16_t failsafe_throttle;
    uint16_t plog_arm_counter;
    uint32_t plog_lifetime;
    int16_t conf_mag_declination;
    uint8_t conf_vbatscale;
    uint8_t conf_vbatlevel_warn1;
    uint8_t conf_vbatlevel_warn2;
    uint8_t conf_vbatlevel_crit;
};
typedef struct _msp_misc MSP_MISC;

struct __attribute__ ((__packed__))  _msp_altitude
{
    int32_t estalt;
    int16_t vario;
};
typedef struct _msp_altitude MSP_ALTITUDE;

struct __attribute__ ((__packed__))  _msp_raw_gps
{
    uint8_t   gps_fix;
    uint8_t   gps_numsat;
    int32_t   gps_lat; // deg * 10,000,000
    int32_t   gps_lon; // deg * 10,000,000
    int16_t   gps_altitude; // metre
    uint16_t  gps_speed;  // cm/s
    uint16_t  gps_ground_course;  // unit: degree*10
};
typedef struct _msp_raw_gps MSP_RAW_GPS;

// MSP_ATTITUDE (108)
struct __attribute__ ((__packed__))  _msp_attitude
{
    int16_t angx; // Range [-180;180]
    int16_t angy; // Range [-90;90]
    int16_t  heading; //Range [-180;180]
};
typedef struct _msp_attitude MSP_ATTITUDE;

struct __attribute__ ((__packed__))  _msp_wp
{
    uint8_t wp_no;
    uint8_t action;
    int32_t lat;
    int32_t lon;
    int32_t altitude;
    uint16_t p1;
    uint16_t p2;
    uint16_t p3;
    uint8_t flag;
};
typedef struct _msp_wp MSP_WP;

struct __attribute__ ((__packed__))  _msp_nav_status
{
    uint8_t gps_mode;
    uint8_t nav_mode;
    uint8_t action;
    uint8_t wp_number;
    uint8_t nav_error;
    uint16_t target_bearing;
};
typedef struct _msp_nav_status MSP_NAV_STATUS;

struct __attribute__ ((__packed__))  _msp_nav_config
{
     uint8_t flag1;
     uint8_t flag2;
     uint16_t wp_radius;
     uint16_t safe_wp_distance;
     uint16_t nav_max_altitude;
     uint16_t nav_speed_max;
     uint16_t nav_speed_min;
     uint8_t crosstrack_gain;
     uint16_t nav_bank_max;
     uint16_t rth_altitude;
     uint8_t land_speed;
     uint16_t fence;
     uint8_t max_wp_number;
};
typedef struct _msp_nav_config MSP_NAV_CONFIG;

struct __attribute__ ((__packed__))  _msp_radio
{
     uint16_t rxerrors;
     uint16_t fixed_errors;
     uint8_t localrssi;
     uint8_t remrssi;
     uint8_t txbuf;
     uint8_t noise;
     uint8_t remnoise;
};
typedef struct _msp_radio MSP_RADIO;

struct __attribute__ ((__packed__))  _msp_comp_gps
{
     uint16_t range;
     int16_t direction;
     uint8_t update;
};
typedef struct _msp_comp_gps MSP_COMP_GPS;


struct __attribute__ ((__packed__))  _msp_rc_tuning
{
    uint8_t rc_rate;
    uint8_t rc_expo;
    uint8_t rollpitchrate;
    uint8_t yawrate;
    uint8_t dynthrpid;
    uint8_t throttle_mid;
    uint8_t throttle_expo;
};
typedef struct _msp_rc_tuning MSP_RC_TUNING;

struct __attribute__ ((__packed__))  _msp_analog
{
     uint8_t vbat;
     uint16_t powermetersum;
     uint16_t rssi;
     uint16_t amps;
};
typedef struct _msp_analog MSP_ANALOG;

struct __attribute__ ((__packed__))  _ltm_gframe
{
    int32_t lat;
    int32_t lon;
    uint8_t speed;
    int32_t alt;
    uint8_t sats;
};
typedef struct _ltm_gframe LTM_GFRAME;

struct __attribute__ ((__packed__))  _ltm_aframe
{
    int16_t pitch;
    int16_t roll;
    int16_t heading;
};
typedef struct _ltm_aframe LTM_AFRAME;

struct __attribute__ ((__packed__))  _ltm_sframe
{
    int16_t vbat;
    int16_t vcurr;
    uint8_t rssi;
    uint8_t airspeed;
    uint8_t flags;
};
typedef struct _ltm_sframe LTM_SFRAME;
