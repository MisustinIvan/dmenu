/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Iosevka Nerd Font Mono:size=13",
	"monospace:size=13"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

// colorscheme
#define col_gray1 "#222222"
#define col_gray2 "#444444"
#define col_gray3 "#bbbbbb"
#define col_gray4 "#eeeeee"
#define col_cyan "#344e5b"
#define col_green "#6ac769"
#define col_yellow "#e5c63f"
#define col_white "#f8ecaa"
#define col_red "#e3433f"

#define col_1 "#cf8592"
#define col_2 "#165a5d"
#define col_3 "#eab8bb"
#define col_4 "#298657"

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
    [SchemeNorm] = { col_3, col_2 },
	[SchemeSel] = { col_2,  col_1},
	[SchemeOut] = { col_2, col_2 },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
