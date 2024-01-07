# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes     # Virtual DIP switch configuration
MAGIC_ENABLE = yes
# KEYBOARD_SHARED_EP = yes    # Free up some extra endpoints - needed if console+mouse+extra
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover

CUSTOM_MATRIX = lite
QUANTUM_SRC += matrix.c