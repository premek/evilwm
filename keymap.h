#ifndef _KEYMAP_H
#define _KEYMAP_H

#define KEY_NEXT        XK_g
#define KEY_NEW         XK_Return

#define KEY_TOPLEFT     XK_m
#define KEY_TOPRIGHT    XK_slash
#define KEY_BOTTOMLEFT  XK_comma
#define KEY_BOTTOMRIGHT XK_period

#define KEY_LEFT        XK_j
#define KEY_RIGHT       XK_semicolon
#define KEY_DOWN        XK_k
#define KEY_UP          XK_l

#define KEY_LOWER       XK_Insert
#define KEY_ALTLOWER    XK_KP_Insert

#define KEY_INFO        XK_a
#define KEY_MAXVERT     XK_x
#define KEY_MAX         XK_c

#define KEY_DOCK_TOGGLE XK_b

#ifdef VWM
# define KEY_FIX        XK_f
# define KEY_PREVDESK   XK_s
# define KEY_NEXTDESK   XK_d
# define KEY_TOGGLEDESK XK_v

# define KEY_DESK1	XK_q
# define KEY_DESK2	XK_w
# define KEY_DESK3	XK_e
# define KEY_DESK4	XK_r
# define KEY_DESK5	XK_t
# define KEY_DESK6	XK_y
# define KEY_DESK7	XK_u
# define KEY_DESK8	XK_i
# define KEY_DESK9	XK_o
# define KEY_DESK0	XK_p

#endif

/* Mixtures of Ctrl, Alt an Escape are used for things like VMWare and
 * XFree86/Cygwin, so the KILL key is an option in the Makefile  */
#ifndef KEY_KILL
# define KEY_KILL       XK_Escape
#endif

#endif
