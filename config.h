/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Source Sans Pro:style=Semibold:size=16"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#d8dee9", "#3b4252" },
	[SchemeSel] = { "#2e3440", "#81a1c1" },
	[SchemeSelHighlight] = { "#4c566a", "#81a1c1" },
	[SchemeNormHighlight] = { "#eceff4", "#2e3440" },
	[SchemeOut] = { "#d8dee9", "#434c5e" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 15;
static unsigned int columns    = 2;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
