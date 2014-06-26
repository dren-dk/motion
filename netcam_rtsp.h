#include "netcam.h"

struct rtsp_context {
	AVFormatContext*      format_context;
	AVCodecContext*       codec_context;
	int                   video_stream_index;
	char*                 path;
	char*                 user;
	char*                 pass;
};

int netcam_setup_rtsp(netcam_context_ptr netcam, struct url_t *url);
void netcam_shutdown_rtsp(netcam_context_ptr netcam);
void netcam_reconnect_rtsp(netcam_context_ptr netcam);
