# VPATH += keyboards/gboards/
EXTRAKEY_ENABLE 	= yes   # Audio control and system control
COMBO_ENABLE 		= yes   # Enable QMK combos
# LEADER_ENABLE		= yes	# Leader keys (sequence of keys for macros)

# Save firmware space
LTO_ENABLE          = yes   # Compiler optimizations
MOUSEKEY_ENABLE     = no	# Disable mouse keys
OLED_DRIVER_ENABLE  = no	# Disable OLED support
SPACE_CADET_ENABLE 	= no	# Disable space cadet shift (tapping shift keys produces parens)
ENCODER_ENABLE 		= no	# Disable rotary encoder support
WPM_ENABLE 			= no	# Disable logging of words per minute
MAGIC_ENABLE		= no	# Disable keys to swap functionality of various other keys
GRAVE_ESC_ENABLE	= no	# Disable ESC key is also grave/tilde
RGBLIGHT_ENABLE     = no 	# Disable WS2812 RGB underlight
