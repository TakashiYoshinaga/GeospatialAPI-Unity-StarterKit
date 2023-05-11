#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.Physics2D::.cctor()
extern void Physics2D__cctor_m7B7A8EEEE744CE27534A7ADF12F31A4E376544E8 (void);
// 0x00000002 UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern void RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B (void);
// 0x00000003 UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern void RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2 (void);
// 0x00000004 System.Single UnityEngine.RaycastHit2D::get_distance()
extern void RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613 (void);
// 0x00000005 UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern void RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	Physics2D__cctor_m7B7A8EEEE744CE27534A7ADF12F31A4E376544E8,
	RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B,
	RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2,
	RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613,
	RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD,
};
extern void RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B_AdjustorThunk (void);
extern void RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2_AdjustorThunk (void);
extern void RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613_AdjustorThunk (void);
extern void RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x06000002, RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B_AdjustorThunk },
	{ 0x06000003, RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2_AdjustorThunk },
	{ 0x06000004, RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613_AdjustorThunk },
	{ 0x06000005, RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD_AdjustorThunk },
};
static const int32_t s_InvokerIndices[5] = 
{
	6875,
	4290,
	4290,
	4249,
	4212,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_Physics2DModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_Physics2DModule_CodeGenModule = 
{
	"UnityEngine.Physics2DModule.dll",
	5,
	s_methodPointers,
	4,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
