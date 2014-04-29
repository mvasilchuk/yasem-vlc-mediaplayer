#ifndef VLCMEDIAPLAYER_H
#define VLCMEDIAPLAYER_H

#include "macros.h"
#include "mediaplayerplugin.h"
#include "stbplugin.h"
#include "vlcmediaplayer_global.h"

#include <QObject>

namespace yasem
{
class Plugin;

class VLCMEDIAPLAYERSHARED_EXPORT VlcMediaPlayer: public QObject, public virtual Plugin, public MediaPlayerPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.VlcMediaPlayer/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::Plugin yasem::MediaPlayerPlugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "Vlc Mediaplayer plugin for YASEM")
public:
    VlcMediaPlayer();

    // Plugin interface
public:
    PLUGIN_ERROR_CODES initialize();
    PLUGIN_ERROR_CODES deinitialize();

    // MediaPlayerPlugin interface
public:
    void parent(QWidget *parent);
    QWidget *parent();
    void widget(QWidget *videoWidget);
    QWidget *widget();
    bool mediaPlay(const QString &url);
    bool mediaContinue();
    bool mediaPause();
    bool mediaStop();
    bool mediaReset();
    int audioPID();
    void audioPID(int pid);
    int loop();
    void loop(int loop);
    bool mute();
    void mute(bool value);
    int bufferLoad();
    long mediaLength();
    qint64 position();
    void position(qint64 pos);
    qint64 duration();
    int volume();
    void volume(int vol);
    void show();
    void hide();
    void rect(const QRect &rect);
    QRect rect();
    bool isVisible();
    MediaPlayingState state();
    bool state(MediaPlayingState state);
    void aspectRatio(ASPECT_RATIO mode);
    ASPECT_RATIO aspectRatio();
    void move(int x, int y);
    void raise();
};

}

#endif // VLCMEDIAPLAYER_H
