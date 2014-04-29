#include "vlcmediaplayer.h"

using namespace yasem;

VlcMediaPlayer::VlcMediaPlayer()
{
}


PLUGIN_ERROR_CODES yasem::VlcMediaPlayer::initialize()
{
}

PLUGIN_ERROR_CODES yasem::VlcMediaPlayer::deinitialize()
{
}

void yasem::VlcMediaPlayer::parent(QWidget *parent)
{
}

QWidget *yasem::VlcMediaPlayer::parent()
{
}

void yasem::VlcMediaPlayer::widget(QWidget *videoWidget)
{
}

QWidget *yasem::VlcMediaPlayer::widget()
{
}

bool yasem::VlcMediaPlayer::mediaPlay(const QString &url)
{
}

bool yasem::VlcMediaPlayer::mediaContinue()
{
}

bool yasem::VlcMediaPlayer::mediaPause()
{
}

bool yasem::VlcMediaPlayer::mediaStop()
{
}

bool yasem::VlcMediaPlayer::mediaReset()
{
}

int yasem::VlcMediaPlayer::audioPID()
{
}

void yasem::VlcMediaPlayer::audioPID(int pid)
{
}

int yasem::VlcMediaPlayer::loop()
{
}

void yasem::VlcMediaPlayer::loop(int loop)
{
}

bool yasem::VlcMediaPlayer::mute()
{
}

void yasem::VlcMediaPlayer::mute(bool value)
{
}

int yasem::VlcMediaPlayer::bufferLoad()
{
}

long yasem::VlcMediaPlayer::mediaLength()
{
}

qint64 yasem::VlcMediaPlayer::position()
{
}

void yasem::VlcMediaPlayer::position(qint64 pos)
{
}

qint64 yasem::VlcMediaPlayer::duration()
{
}

int yasem::VlcMediaPlayer::volume()
{
}

void yasem::VlcMediaPlayer::volume(int vol)
{
}

void yasem::VlcMediaPlayer::show()
{
}

void yasem::VlcMediaPlayer::hide()
{
}

void yasem::VlcMediaPlayer::rect(const QRect &rect)
{
}

QRect yasem::VlcMediaPlayer::rect()
{
}

bool yasem::VlcMediaPlayer::isVisible()
{
}

MediaPlayingState yasem::VlcMediaPlayer::state()
{
}

bool yasem::VlcMediaPlayer::state(MediaPlayingState state)
{
}

void yasem::VlcMediaPlayer::aspectRatio(ASPECT_RATIO mode)
{
}

ASPECT_RATIO yasem::VlcMediaPlayer::aspectRatio()
{
}

void yasem::VlcMediaPlayer::move(int x, int y)
{
}

void yasem::VlcMediaPlayer::raise()
{
}

