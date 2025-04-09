from pytube import YouTube
import os

def baixar_video(youtube_url, pasta_destino="."):
    try:
        yt = YouTube(youtube_url)
        stream = yt.streams.get_highest_resolution()  # Baixa na melhor qualidade disponível
        print(f"Baixando: {yt.title}...")
        arquivo = stream.download(output_path=pasta_destino)
        print(f"Download concluído! O vídeo foi salvo em: {arquivo}")
    except Exception as e:
        print(f"Erro ao baixar o vídeo: {e}")

if __name__ == "__main__":
    url = input("Digite o link do vídeo do YouTube: ")
    baixar_video(url)
