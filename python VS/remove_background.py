import rembg
from PIL import Image

input_path = r'C:\Users\bishal\Pictures\photoshop\IMG_20221222_114711-Recovered.jpg'
output_path = 'IMGc.png'

# Open the input image
input_image = Image.open(input_path)

# Use rembg to remove the background
output_image = rembg.remove(input_image)

# Save the output image
output_image.save(output_path)

# Close the input and output images
# input_image.close()
# output_image.close()
