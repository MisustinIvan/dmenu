/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=14"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/*static const char *colors[SchemeLast][2] = { */
	/*     fg         bg       */
/*  [SchemeNorm] = { "#f8ecaa", "#344e5b" },
	[SchemeSel] = { "#344e5b", "#e3433f" },
	[SchemeOut] = { "#344e5b", "#344e5b" },
}; */

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
    [SchemeNorm] = { "#e0def4", "#232136" },
	[SchemeSel] = { "#232136", "#c4a7e7" },
	[SchemeOut] = { "#232136", "#232136" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
