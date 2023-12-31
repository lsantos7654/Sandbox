from luma.core.interface.serial import i2c
from luma.oled.device import ssd1306, sh1106
from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont
import time

# Initialize the display
serial = i2c(port=1, address=0x3C)  # Use the correct I2C address for your display
device = ssd1306(serial)

# Create an image buffer
image = Image.new("1", (device.width, device.height))
draw = ImageDraw.Draw(image)

# Load a font
font = ImageFont.load_default()

# Clear the display
device.clear()

# Display "Hello"
draw.text((15, 10), "I Love You Lisa!", fill="white", font=font)
draw.text((15, 25), "I Love You Lisa!", fill="white", font=font)
draw.text((15, 40), "I Love You Lisa!", fill="white", font=font)
device.display(image)

time.sleep(5)

# Clean up
device.cleanup()
