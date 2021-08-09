/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

// #include "/root/.cache/wal/colors-wal-dmenu.h"
//static const char *colors[SchemeLast][2] = { 
	/*     fg         bg       */
/*	[SchemeNorm] = { "#cca0ed", "#0F0134" },
    [SchemeSelHighlight] = { "#ffc978", "#005577"  },
    [SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeSel] = { "#cca0ed", "#1B1E95" },
	[SchemeOut] = { "#cca0ed", "#9D19D4" },
}; */  


static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#a3c8bd", "#0F1419" },
  [SchemeSelHighlight] = { "#ffc978", "#98971A"  },
  [SchemeNormHighlight] = { "#e5a08a", "#98971A" },
	[SchemeSel] = { "#a3c8bd", "#B04B34" },
	[SchemeOut] = { "#a3c8bd", "#DD9354" },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of windows border*/
static const unsigned int border_width = 3;

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;
/* -h option minimum height og menu line */
static unsigned int lineheight = 30;
//static unsigned int min_lineheight = 8;


