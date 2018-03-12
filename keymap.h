#ifndef _KEYMAP_H
#define _KEYMAP_H

#define KEY_NEXT        XK_g
#define KEY_NEW         XK_Return

#define KEY_TOPLEFT     XK_u
#define KEY_TOPRIGHT    XK_i
#define KEY_BOTTOMLEFT  XK_m
#define KEY_BOTTOMRIGHT XK_comma

#define KEY_LEFT        XK_j
#define KEY_RIGHT       XK_semicolon
#define KEY_DOWN        XK_k
#define KEY_UP          XK_l

#define KEY_LOWER       XK_Insert
#define KEY_ALTLOWER    XK_KP_Insert

#define KEY_INFO        XK_z
#define KEY_MAXVERT     XK_x
#define KEY_MAX         XK_c

#define KEY_DOCK_TOGGLE XK_b

#ifdef VWM
# define KEY_FIX        XK_f
# define KEY_PREVDESK   XK_e
# define KEY_NEXTDESK   XK_d
# define KEY_TOGGLEDESK XK_v
#endif

/* Mixtures of Ctrl, Alt an Escape are used for things like VMWare and
 * XFree86/Cygwin, so the KILL key is an option in the Makefile  */
#ifndef KEY_KILL
# define KEY_KILL       XK_a
#endif

#endif
