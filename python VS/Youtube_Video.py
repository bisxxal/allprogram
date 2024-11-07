from pytube import YouTube
from tqdm import tqdm
import os

def download(video_url, save_path):
    try:
        yt = YouTube(video_url)

        # Get the highest resolution stream
        video_stream = yt.streams.get_highest_resolution()

        # Get the file size of the video stream
        file_size = video_stream.filesize

        # Initialize tqdm to show progress
        progress_bar = tqdm(total=file_size, unit='bytes', unit_scale=True, desc=f'Downloading {yt.title}', ncols=100)

        # Download the video with progress bar
        video_stream.download(output_path=save_path, filename='video')

        progress_bar.close()  # Close tqdm after download completes
        print("\nDownload Successful!")

    except Exception as e:
        print("ERROR:", str(e))

# Example usage:
path = 'C:\\Users\\bishal\\Documents\\ytvideodownload'
link = 'https://youtu.be/3bvBUT5pQYY'

download(link, path)
