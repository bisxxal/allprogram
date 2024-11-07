from pytube import YouTube

def download(video_url, save_path):
    try:
        yt = YouTube(video_url)
        video_stream = yt.streams.get_highest_resolution()
        video_stream.download(output_path=save_path)
        print("Downloaded Successfully!!!")
    except Exception as e:
        print("ERROR:", str(e))

path = 'C:\\Users\\bishal\\Documents'
link = 'https://youtu.be/fxUFmPfhD6M?si=TeUQMjWCWmbLJOH6'
download(link, path)


# https://youtu.be/BgFDbsJ7J00?si=4u6F8y6r0zKT8nfE

# C:\Users\bishal\Documents\ytvideodowlode