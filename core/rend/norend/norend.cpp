
#include "hw/pvr/Renderer_if.h"
#include "oslib/oslib.h"

void rend_set_fb_scale(float x,float y) { }
void rend_text_invl(vram_block* bl) { }

struct norend : Renderer
{
	bool Init()
	{
		return true;
	}

	void Resize(int w, int h) { }
	void Term() { }

	bool Render()
	{
		return !pvrrc.isRTT;
	}

  bool Process(TA_context*) { }
	void Present() { }
};

u32 GetTexture(TSP tsp,TCW tcw) { return 0; }

Renderer* rend_norend() { return new norend(); }
