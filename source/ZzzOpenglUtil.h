#ifndef __ZZOPENGLUTIL_H__
#define __ZZOPENGLUTIL_H__

#pragma once

extern float PerspectiveX;
extern float PerspectiveY;
extern int OpenglWindowWidth; 
extern int OpenglWindowHeight;
extern unsigned int WindowWidth;
extern unsigned int WindowHeight;
extern vec3_t CollisionPosition;
extern float  FPS;
#if defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)		// 실FPS.(고정 20FPS 상황에서 추정용.)
extern float g_fFrameEstimate;		
#endif // defined(LDS_FOR_DEVELOPMENT_TESTMODE) || defined(LDS_UNFIXED_FIXEDFRAME_FORDEBUG)
extern float  WorldTime;
extern bool   CameraTopViewEnable;
extern float  CameraViewNear;
extern float  CameraViewFar;
extern float  CameraFOV;
extern vec3_t CameraPosition;
extern vec3_t CameraAngle;
extern float  CameraMatrix[3][4];
extern float  g_fCameraCustomDistance;
extern bool   FogEnable;
extern bool   TextureEnable;
extern bool   DepthTestEnable;
extern bool   CullFaceEnable;
extern bool   DepthMaskEnable;
extern vec3_t       MousePosition;
extern vec3_t       MouseTarget;
extern int          MouseX;
extern int          MouseY;
extern int          BackMouseX;
extern int          BackMouseY;
extern bool         MouseLButton;
extern bool     	MouseLButtonPop;
extern bool 		MouseLButtonPush;
extern bool         MouseRButton;
extern bool 		MouseRButtonPop;
extern bool 		MouseRButtonPush;
extern bool 		MouseLButtonDBClick;
extern bool         MouseMButton;
extern bool 		MouseMButtonPop;
extern bool 		MouseMButtonPush;
extern int          MouseWheel;
extern DWORD		MouseRButtonPress;
extern char         GrabFileName[];
extern bool         GrabEnable;

#ifdef DO_PROCESS_DEBUGCAMERA
extern bool			MouseRButtonClicking;
#endif // DO_PROCESS_DEBUGCAMERA

//  etc
//void OpenExploper(char *Name,char *para=NULL);
bool CheckID_HistoryDay ( char* Name, WORD day );
void SaveScreen();
void gluPerspective2(float Fov,float Aspect,float ZNear,float ZFar);
void glViewport2(int x,int y,int Width,int Height);
void CreateScreenVector ( int sx, int sy, vec3_t Target, bool bFixView=true );
void Projection(vec3_t Position,int *sx,int *sy);
void GetOpenGLMatrix(float Matrix[3][4]);
void TransformPosition(vec3_t Position,vec3_t WorldPosition,int *x,int *y);
bool TestDepthBuffer(vec3_t Position);
void BeginSprite();
void EndSprite();
void EnableDepthTest();
void DisableDepthTest();
void EnableCullFace();
void DisableCullFace();
void EnableDepthMask();
void DisableDepthMask();
void DisableTexture( bool AlphaTest=false );
void DisableAlphaBlend();
void EnableLightMap();
void EnableAlphaTest(bool DepthMake=true);
void EnableAlphaBlend();
void EnableAlphaBlendMinus();
void EnableAlphaBlend2();
void EnableAlphaBlend3();
void EnableAlphaBlend4();
void BindTexture(int tex);
void BindTextureStream(int tex);
void EndTextureStream();
void BeginOpengl(int x=0,int y=0,int Width=640,int Height=480);
void EndOpengl();
void UpdateMousePositionn();
extern inline void TEXCOORD(float *c,float u,float v);
void RenderBox(float Matrix[3][4]);
void RenderPlane3D(float Width,float Height,float Matrix[3][4]);
void RenderSprite(int Texture,vec3_t Position,float Width,float Height,vec3_t Light,float Angle=0.f,float u=0.f,float v=0.f,float uWidth=1.f,float vHeight=1.f);
void RenderSpriteUV(int Texture,vec3_t Position,float Width,float Height,float (*UV)[2],vec3_t Light[4],float Alpha=1.f);
void RenderNumber(vec3_t Position,int Num,vec3_t Color,float Alpha=1.f,float Scale=15.f);
float RenderNumber2D(float x,float y,int Num,float Width,float Height);
void RenderColor(float x,float y,float Width,float Height,float Alpha = 0.f,int Flag = 0);
void EndRenderColor();
void RenderBitmap(int Texture,float x,float y,float Width,float Height,float u=0.f,float v=0.f,float uWidth=1.f,float vHeight=1.f,bool Scale=true,bool StartScale=true,float Alpha = 0.f);
void RenderColorBitmap(int Texture,float x,float y,float Width,float Height,float u=0.f,float v=0.f,float uWidth=1.f,float vHeight=1.f, unsigned int color = 0xffffffff);
void RenderBitmapRotate(int Texture,float x,float y,float Width,float Height,float Angle,float u = 0.f,float v = 0.f,float uWidth = 1.f,float vHeight = 1.f);
void RenderBitRotate(int Texture,float x,float y,float Width,float Height,float Rotate);
void RenderPointRotate(int Texture,float ix,float iy,float iWidth,float iHeight,float x,float y,float Width,float Height,float Rotate,float Rotate_Loc,float uWidth,float vHeight,int Num = -1);
void RenderBitmapLocalRotate(int Texture,float x,float y,float Width,float Height,float Rotate,float u=0.f,float v=0.f,float uWidth=1.f,float vHeight=1.f);
void RenderBitmapAlpha(int Texture,float sx,float sy,float Width,float Height);
void RenderBitmapUV(int Texture,float x,float y,float Width,float Height,float u,float v,float uWidth,float vHeight);
void BeginBitmap();
void EndBitmap();
float absf(float a);
float minf(float a,float b);
float maxf(float a,float b);
void InitCollisionDetectLineToFace();
bool CollisionDetectLineToFace(vec3_t Position, vec3_t Target, int Polygon, float *v1, float *v2, float *v3, float *v4, vec3_t Normal, bool Collision=true);
bool CollisionDetectLineToOBB(vec3_t p1, vec3_t p2, OBB_t obb);
void CalcFPS();

#endif// __ZZOPENGLUTIL_H__
