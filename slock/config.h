/* user and group to drop privileges to */
static const char *user  = "haxtag";
static const char *group = "haxtag";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#192642",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "#254219",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds to quick cancel */
static const int timetocancel = 15;
/* default message */
static const char * message = " I use Arch BTW";

/* text color */
static const char * text_color = "#42d7f5";

/* text size (must be a valid size) */
static const char * font_name = "lucidasans-24";
