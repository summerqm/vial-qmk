# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = caterina

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes  # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes   # Mouse keys
EXTRAKEY_ENABLE = yes 	# Audio control and System control
# COMMAND_ENABLE = yes    # Commands for debug and configuration
NKRO_ENABLE = yes       # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# RGBLIGHT_ENABLE = yes

# CONSOLE_ENABLE = no     # Console for debug
# SLEEP_LED_ENABLE = no   # Breathing sleep LED during USB suspend
# BACKLIGHT_ENABLE = no   # Enable keyboard backlight functionality
# AUDIO_ENABLE = no
# ENCODER_ENABLE = no

LTO_ENABLE = yes