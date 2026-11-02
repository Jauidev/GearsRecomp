#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_822292A8"))) PPC_WEAK_FUNC(sub_822292A8);
PPC_FUNC_IMPL(__imp__sub_822292A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10370(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10370);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822292B0"))) PPC_WEAK_FUNC(sub_822292B0);
PPC_FUNC_IMPL(__imp__sub_822292B0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10369(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10369, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822292C4"))) PPC_WEAK_FUNC(sub_822292C4);
PPC_FUNC_IMPL(__imp__sub_822292C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822292C8"))) PPC_WEAK_FUNC(sub_822292C8);
PPC_FUNC_IMPL(__imp__sub_822292C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10369(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10369);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822292D0"))) PPC_WEAK_FUNC(sub_822292D0);
PPC_FUNC_IMPL(__imp__sub_822292D0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10367, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822292E4"))) PPC_WEAK_FUNC(sub_822292E4);
PPC_FUNC_IMPL(__imp__sub_822292E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822292E8"))) PPC_WEAK_FUNC(sub_822292E8);
PPC_FUNC_IMPL(__imp__sub_822292E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10367(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10367);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822292F0"))) PPC_WEAK_FUNC(sub_822292F0);
PPC_FUNC_IMPL(__imp__sub_822292F0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10366, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229304"))) PPC_WEAK_FUNC(sub_82229304);
PPC_FUNC_IMPL(__imp__sub_82229304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229308"))) PPC_WEAK_FUNC(sub_82229308);
PPC_FUNC_IMPL(__imp__sub_82229308) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10366(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10366);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229310"))) PPC_WEAK_FUNC(sub_82229310);
PPC_FUNC_IMPL(__imp__sub_82229310) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10365(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10365, ctx.r4.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229324"))) PPC_WEAK_FUNC(sub_82229324);
PPC_FUNC_IMPL(__imp__sub_82229324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229328"))) PPC_WEAK_FUNC(sub_82229328);
PPC_FUNC_IMPL(__imp__sub_82229328) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10365(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10365);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229330"))) PPC_WEAK_FUNC(sub_82229330);
PPC_FUNC_IMPL(__imp__sub_82229330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// stw r11,10292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10292, ctx.r11.u32);
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222936C"))) PPC_WEAK_FUNC(sub_8222936C);
PPC_FUNC_IMPL(__imp__sub_8222936C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229370"))) PPC_WEAK_FUNC(sub_82229370);
PPC_FUNC_IMPL(__imp__sub_82229370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222937C"))) PPC_WEAK_FUNC(sub_8222937C);
PPC_FUNC_IMPL(__imp__sub_8222937C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229380"))) PPC_WEAK_FUNC(sub_82229380);
PPC_FUNC_IMPL(__imp__sub_82229380) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,12400
	ctx.r4.s64 = ctx.r3.s64 + 12400;
	// stw r11,11584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11584, ctx.r11.u32);
	// b 0x8222ab30
	sub_8222AB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82229390"))) PPC_WEAK_FUNC(sub_82229390);
PPC_FUNC_IMPL(__imp__sub_82229390) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11584);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229398"))) PPC_WEAK_FUNC(sub_82229398);
PPC_FUNC_IMPL(__imp__sub_82229398) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f0,13996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,24328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// stfs f0,10712(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10712, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x822293d4
	if (!cr6.eq) goto loc_822293D4;
	// lfs f12,10708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x822293d8
	if (cr6.eq) goto loc_822293D8;
loc_822293D4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822293D8:
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// bne cr6,0x822293fc
	if (!cr6.eq) goto loc_822293FC;
	// lfs f0,10716(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10716);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82229400
	if (cr6.eq) goto loc_82229400;
loc_822293FC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82229400:
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222943C"))) PPC_WEAK_FUNC(sub_8222943C);
PPC_FUNC_IMPL(__imp__sub_8222943C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229440"))) PPC_WEAK_FUNC(sub_82229440);
PPC_FUNC_IMPL(__imp__sub_82229440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f13,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,26064(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26064);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222945C"))) PPC_WEAK_FUNC(sub_8222945C);
PPC_FUNC_IMPL(__imp__sub_8222945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229460"))) PPC_WEAK_FUNC(sub_82229460);
PPC_FUNC_IMPL(__imp__sub_82229460) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f12,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10708(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10708, temp.u32);
	// stfs f13,10716(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10716, temp.u32);
	// bne cr6,0x82229490
	if (!cr6.eq) goto loc_82229490;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82229494
	if (cr6.eq) goto loc_82229494;
loc_82229490:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82229494:
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// lfs f12,10712(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10712);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// bne cr6,0x822294b8
	if (!cr6.eq) goto loc_822294B8;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x822294bc
	if (cr6.eq) goto loc_822294BC;
loc_822294B8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822294BC:
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822294F8"))) PPC_WEAK_FUNC(sub_822294F8);
PPC_FUNC_IMPL(__imp__sub_822294F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10708(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229508"))) PPC_WEAK_FUNC(sub_82229508);
PPC_FUNC_IMPL(__imp__sub_82229508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229524"))) PPC_WEAK_FUNC(sub_82229524);
PPC_FUNC_IMPL(__imp__sub_82229524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229528"))) PPC_WEAK_FUNC(sub_82229528);
PPC_FUNC_IMPL(__imp__sub_82229528) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229534"))) PPC_WEAK_FUNC(sub_82229534);
PPC_FUNC_IMPL(__imp__sub_82229534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229538"))) PPC_WEAK_FUNC(sub_82229538);
PPC_FUNC_IMPL(__imp__sub_82229538) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10624, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229550"))) PPC_WEAK_FUNC(sub_82229550);
PPC_FUNC_IMPL(__imp__sub_82229550) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229558"))) PPC_WEAK_FUNC(sub_82229558);
PPC_FUNC_IMPL(__imp__sub_82229558) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,12168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	// stw r4,11588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11588, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222956c
	if (!cr6.eq) goto loc_8222956C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8222956C:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r4,r11,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// stw r4,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229588"))) PPC_WEAK_FUNC(sub_82229588);
PPC_FUNC_IMPL(__imp__sub_82229588) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11588(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11588);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229590"))) PPC_WEAK_FUNC(sub_82229590);
PPC_FUNC_IMPL(__imp__sub_82229590) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,12172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12172);
	// stw r4,11592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11592, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822295a4
	if (!cr6.eq) goto loc_822295A4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822295A4:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r11,r4,4,24,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822295C0"))) PPC_WEAK_FUNC(sub_822295C0);
PPC_FUNC_IMPL(__imp__sub_822295C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11592(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11592);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822295C8"))) PPC_WEAK_FUNC(sub_822295C8);
PPC_FUNC_IMPL(__imp__sub_822295C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,12176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12176);
	// stw r4,11596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11596, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822295dc
	if (!cr6.eq) goto loc_822295DC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822295DC:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r11,r4,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822295F8"))) PPC_WEAK_FUNC(sub_822295F8);
PPC_FUNC_IMPL(__imp__sub_822295F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11596);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229600"))) PPC_WEAK_FUNC(sub_82229600);
PPC_FUNC_IMPL(__imp__sub_82229600) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lwz r11,12180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12180);
	// stw r4,11600(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11600, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82229614
	if (!cr6.eq) goto loc_82229614;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82229614:
	// lwz r11,10332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// rlwimi r11,r4,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229630"))) PPC_WEAK_FUNC(sub_82229630);
PPC_FUNC_IMPL(__imp__sub_82229630) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11600(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11600);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229638"))) PPC_WEAK_FUNC(sub_82229638);
PPC_FUNC_IMPL(__imp__sub_82229638) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11612, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229640"))) PPC_WEAK_FUNC(sub_82229640);
PPC_FUNC_IMPL(__imp__sub_82229640) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11612(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11612);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229648"))) PPC_WEAK_FUNC(sub_82229648);
PPC_FUNC_IMPL(__imp__sub_82229648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,59,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,24984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24984);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11620(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11620, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,10470(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10470, ctx.r11.u16);
	// sth r11,10468(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10468, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229694"))) PPC_WEAK_FUNC(sub_82229694);
PPC_FUNC_IMPL(__imp__sub_82229694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229698"))) PPC_WEAK_FUNC(sub_82229698);
PPC_FUNC_IMPL(__imp__sub_82229698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822296A8"))) PPC_WEAK_FUNC(sub_822296A8);
PPC_FUNC_IMPL(__imp__sub_822296A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,58,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,13996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13996);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11624(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11624, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10474(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10474, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822296EC"))) PPC_WEAK_FUNC(sub_822296EC);
PPC_FUNC_IMPL(__imp__sub_822296EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822296F0"))) PPC_WEAK_FUNC(sub_822296F0);
PPC_FUNC_IMPL(__imp__sub_822296F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229700"))) PPC_WEAK_FUNC(sub_82229700);
PPC_FUNC_IMPL(__imp__sub_82229700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,58,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 58) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,13996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13996);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,11628(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11628, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10472(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10472, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229744"))) PPC_WEAK_FUNC(sub_82229744);
PPC_FUNC_IMPL(__imp__sub_82229744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229748"))) PPC_WEAK_FUNC(sub_82229748);
PPC_FUNC_IMPL(__imp__sub_82229748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11628(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229758"))) PPC_WEAK_FUNC(sub_82229758);
PPC_FUNC_IMPL(__imp__sub_82229758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229780"))) PPC_WEAK_FUNC(sub_82229780);
PPC_FUNC_IMPL(__imp__sub_82229780) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822297AC"))) PPC_WEAK_FUNC(sub_822297AC);
PPC_FUNC_IMPL(__imp__sub_822297AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822297B0"))) PPC_WEAK_FUNC(sub_822297B0);
PPC_FUNC_IMPL(__imp__sub_822297B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822297DC"))) PPC_WEAK_FUNC(sub_822297DC);
PPC_FUNC_IMPL(__imp__sub_822297DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822297E0"))) PPC_WEAK_FUNC(sub_822297E0);
PPC_FUNC_IMPL(__imp__sub_822297E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222980C"))) PPC_WEAK_FUNC(sub_8222980C);
PPC_FUNC_IMPL(__imp__sub_8222980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229810"))) PPC_WEAK_FUNC(sub_82229810);
PPC_FUNC_IMPL(__imp__sub_82229810) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222983C"))) PPC_WEAK_FUNC(sub_8222983C);
PPC_FUNC_IMPL(__imp__sub_8222983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229840"))) PPC_WEAK_FUNC(sub_82229840);
PPC_FUNC_IMPL(__imp__sub_82229840) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222986C"))) PPC_WEAK_FUNC(sub_8222986C);
PPC_FUNC_IMPL(__imp__sub_8222986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229870"))) PPC_WEAK_FUNC(sub_82229870);
PPC_FUNC_IMPL(__imp__sub_82229870) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222989C"))) PPC_WEAK_FUNC(sub_8222989C);
PPC_FUNC_IMPL(__imp__sub_8222989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822298A0"))) PPC_WEAK_FUNC(sub_822298A0);
PPC_FUNC_IMPL(__imp__sub_822298A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822298C4"))) PPC_WEAK_FUNC(sub_822298C4);
PPC_FUNC_IMPL(__imp__sub_822298C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822298C8"))) PPC_WEAK_FUNC(sub_822298C8);
PPC_FUNC_IMPL(__imp__sub_822298C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822298F0"))) PPC_WEAK_FUNC(sub_822298F0);
PPC_FUNC_IMPL(__imp__sub_822298F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222991C"))) PPC_WEAK_FUNC(sub_8222991C);
PPC_FUNC_IMPL(__imp__sub_8222991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229920"))) PPC_WEAK_FUNC(sub_82229920);
PPC_FUNC_IMPL(__imp__sub_82229920) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222994C"))) PPC_WEAK_FUNC(sub_8222994C);
PPC_FUNC_IMPL(__imp__sub_8222994C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229950"))) PPC_WEAK_FUNC(sub_82229950);
PPC_FUNC_IMPL(__imp__sub_82229950) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222997C"))) PPC_WEAK_FUNC(sub_8222997C);
PPC_FUNC_IMPL(__imp__sub_8222997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229980"))) PPC_WEAK_FUNC(sub_82229980);
PPC_FUNC_IMPL(__imp__sub_82229980) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822299AC"))) PPC_WEAK_FUNC(sub_822299AC);
PPC_FUNC_IMPL(__imp__sub_822299AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822299B0"))) PPC_WEAK_FUNC(sub_822299B0);
PPC_FUNC_IMPL(__imp__sub_822299B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,20,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_822299DC"))) PPC_WEAK_FUNC(sub_822299DC);
PPC_FUNC_IMPL(__imp__sub_822299DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822299E0"))) PPC_WEAK_FUNC(sub_822299E0);
PPC_FUNC_IMPL(__imp__sub_822299E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A0C"))) PPC_WEAK_FUNC(sub_82229A0C);
PPC_FUNC_IMPL(__imp__sub_82229A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A10"))) PPC_WEAK_FUNC(sub_82229A10);
PPC_FUNC_IMPL(__imp__sub_82229A10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A34"))) PPC_WEAK_FUNC(sub_82229A34);
PPC_FUNC_IMPL(__imp__sub_82229A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A38"))) PPC_WEAK_FUNC(sub_82229A38);
PPC_FUNC_IMPL(__imp__sub_82229A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A44"))) PPC_WEAK_FUNC(sub_82229A44);
PPC_FUNC_IMPL(__imp__sub_82229A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A48"))) PPC_WEAK_FUNC(sub_82229A48);
PPC_FUNC_IMPL(__imp__sub_82229A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A54"))) PPC_WEAK_FUNC(sub_82229A54);
PPC_FUNC_IMPL(__imp__sub_82229A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A58"))) PPC_WEAK_FUNC(sub_82229A58);
PPC_FUNC_IMPL(__imp__sub_82229A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A64"))) PPC_WEAK_FUNC(sub_82229A64);
PPC_FUNC_IMPL(__imp__sub_82229A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A68"))) PPC_WEAK_FUNC(sub_82229A68);
PPC_FUNC_IMPL(__imp__sub_82229A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A74"))) PPC_WEAK_FUNC(sub_82229A74);
PPC_FUNC_IMPL(__imp__sub_82229A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A78"))) PPC_WEAK_FUNC(sub_82229A78);
PPC_FUNC_IMPL(__imp__sub_82229A78) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A84"))) PPC_WEAK_FUNC(sub_82229A84);
PPC_FUNC_IMPL(__imp__sub_82229A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A88"))) PPC_WEAK_FUNC(sub_82229A88);
PPC_FUNC_IMPL(__imp__sub_82229A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229A94"))) PPC_WEAK_FUNC(sub_82229A94);
PPC_FUNC_IMPL(__imp__sub_82229A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229A98"))) PPC_WEAK_FUNC(sub_82229A98);
PPC_FUNC_IMPL(__imp__sub_82229A98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229AA4"))) PPC_WEAK_FUNC(sub_82229AA4);
PPC_FUNC_IMPL(__imp__sub_82229AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229AA8"))) PPC_WEAK_FUNC(sub_82229AA8);
PPC_FUNC_IMPL(__imp__sub_82229AA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229AB4"))) PPC_WEAK_FUNC(sub_82229AB4);
PPC_FUNC_IMPL(__imp__sub_82229AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229AB8"))) PPC_WEAK_FUNC(sub_82229AB8);
PPC_FUNC_IMPL(__imp__sub_82229AB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229AC4"))) PPC_WEAK_FUNC(sub_82229AC4);
PPC_FUNC_IMPL(__imp__sub_82229AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229AC8"))) PPC_WEAK_FUNC(sub_82229AC8);
PPC_FUNC_IMPL(__imp__sub_82229AC8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10416(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229AD4"))) PPC_WEAK_FUNC(sub_82229AD4);
PPC_FUNC_IMPL(__imp__sub_82229AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229AD8"))) PPC_WEAK_FUNC(sub_82229AD8);
PPC_FUNC_IMPL(__imp__sub_82229AD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,1087
	ctx.r11.s64 = 1087;
	// bne cr6,0x82229ae8
	if (!cr6.eq) goto loc_82229AE8;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_82229AE8:
	// stw r11,10444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10444, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229B18"))) PPC_WEAK_FUNC(sub_82229B18);
PPC_FUNC_IMPL(__imp__sub_82229B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10444);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229B24"))) PPC_WEAK_FUNC(sub_82229B24);
PPC_FUNC_IMPL(__imp__sub_82229B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229B28"))) PPC_WEAK_FUNC(sub_82229B28);
PPC_FUNC_IMPL(__imp__sub_82229B28) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,12168(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12168);
	// stw r4,11756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11756, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82229b60
	if (cr6.eq) goto loc_82229B60;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82229b60
	if (cr6.eq) goto loc_82229B60;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82229b60
	if (cr6.eq) goto loc_82229B60;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82229B60:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10244);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10244, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229BCC"))) PPC_WEAK_FUNC(sub_82229BCC);
PPC_FUNC_IMPL(__imp__sub_82229BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229BD0"))) PPC_WEAK_FUNC(sub_82229BD0);
PPC_FUNC_IMPL(__imp__sub_82229BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11756(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11756);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229BD8"))) PPC_WEAK_FUNC(sub_82229BD8);
PPC_FUNC_IMPL(__imp__sub_82229BD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,12172(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12172);
	// stw r4,11760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11760, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82229c10
	if (cr6.eq) goto loc_82229C10;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82229c10
	if (cr6.eq) goto loc_82229C10;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82229c10
	if (cr6.eq) goto loc_82229C10;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82229C10:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10252);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10252, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229C7C"))) PPC_WEAK_FUNC(sub_82229C7C);
PPC_FUNC_IMPL(__imp__sub_82229C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229C80"))) PPC_WEAK_FUNC(sub_82229C80);
PPC_FUNC_IMPL(__imp__sub_82229C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11760(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11760);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229C88"))) PPC_WEAK_FUNC(sub_82229C88);
PPC_FUNC_IMPL(__imp__sub_82229C88) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,12176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12176);
	// stw r4,11764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11764, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82229cc0
	if (cr6.eq) goto loc_82229CC0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82229cc0
	if (cr6.eq) goto loc_82229CC0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82229cc0
	if (cr6.eq) goto loc_82229CC0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82229CC0:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10256);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10256, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229D2C"))) PPC_WEAK_FUNC(sub_82229D2C);
PPC_FUNC_IMPL(__imp__sub_82229D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229D30"))) PPC_WEAK_FUNC(sub_82229D30);
PPC_FUNC_IMPL(__imp__sub_82229D30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11764(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11764);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229D38"))) PPC_WEAK_FUNC(sub_82229D38);
PPC_FUNC_IMPL(__imp__sub_82229D38) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r8,12180(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12180);
	// stw r4,11768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11768, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82229d70
	if (cr6.eq) goto loc_82229D70;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82229d70
	if (cr6.eq) goto loc_82229D70;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82229d70
	if (cr6.eq) goto loc_82229D70;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82229D70:
	// rlwinm r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10260);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10260, ctx.r11.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229DDC"))) PPC_WEAK_FUNC(sub_82229DDC);
PPC_FUNC_IMPL(__imp__sub_82229DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229DE0"))) PPC_WEAK_FUNC(sub_82229DE0);
PPC_FUNC_IMPL(__imp__sub_82229DE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11768);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229DE8"))) PPC_WEAK_FUNC(sub_82229DE8);
PPC_FUNC_IMPL(__imp__sub_82229DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10496(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10496, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229E0C"))) PPC_WEAK_FUNC(sub_82229E0C);
PPC_FUNC_IMPL(__imp__sub_82229E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229E10"))) PPC_WEAK_FUNC(sub_82229E10);
PPC_FUNC_IMPL(__imp__sub_82229E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10496);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229E20"))) PPC_WEAK_FUNC(sub_82229E20);
PPC_FUNC_IMPL(__imp__sub_82229E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10492(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10492, temp.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229E44"))) PPC_WEAK_FUNC(sub_82229E44);
PPC_FUNC_IMPL(__imp__sub_82229E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229E48"))) PPC_WEAK_FUNC(sub_82229E48);
PPC_FUNC_IMPL(__imp__sub_82229E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10492(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10492);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229E58"))) PPC_WEAK_FUNC(sub_82229E58);
PPC_FUNC_IMPL(__imp__sub_82229E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10488, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229E7C"))) PPC_WEAK_FUNC(sub_82229E7C);
PPC_FUNC_IMPL(__imp__sub_82229E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229E80"))) PPC_WEAK_FUNC(sub_82229E80);
PPC_FUNC_IMPL(__imp__sub_82229E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229E8C"))) PPC_WEAK_FUNC(sub_82229E8C);
PPC_FUNC_IMPL(__imp__sub_82229E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229E90"))) PPC_WEAK_FUNC(sub_82229E90);
PPC_FUNC_IMPL(__imp__sub_82229E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r4.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229EB4"))) PPC_WEAK_FUNC(sub_82229EB4);
PPC_FUNC_IMPL(__imp__sub_82229EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229EB8"))) PPC_WEAK_FUNC(sub_82229EB8);
PPC_FUNC_IMPL(__imp__sub_82229EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229EC4"))) PPC_WEAK_FUNC(sub_82229EC4);
PPC_FUNC_IMPL(__imp__sub_82229EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229EC8"))) PPC_WEAK_FUNC(sub_82229EC8);
PPC_FUNC_IMPL(__imp__sub_82229EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229EE4"))) PPC_WEAK_FUNC(sub_82229EE4);
PPC_FUNC_IMPL(__imp__sub_82229EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229EE8"))) PPC_WEAK_FUNC(sub_82229EE8);
PPC_FUNC_IMPL(__imp__sub_82229EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229EF4"))) PPC_WEAK_FUNC(sub_82229EF4);
PPC_FUNC_IMPL(__imp__sub_82229EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229EF8"))) PPC_WEAK_FUNC(sub_82229EF8);
PPC_FUNC_IMPL(__imp__sub_82229EF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,10328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10328, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229F0C"))) PPC_WEAK_FUNC(sub_82229F0C);
PPC_FUNC_IMPL(__imp__sub_82229F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229F10"))) PPC_WEAK_FUNC(sub_82229F10);
PPC_FUNC_IMPL(__imp__sub_82229F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229F18"))) PPC_WEAK_FUNC(sub_82229F18);
PPC_FUNC_IMPL(__imp__sub_82229F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229F34"))) PPC_WEAK_FUNC(sub_82229F34);
PPC_FUNC_IMPL(__imp__sub_82229F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229F38"))) PPC_WEAK_FUNC(sub_82229F38);
PPC_FUNC_IMPL(__imp__sub_82229F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229F44"))) PPC_WEAK_FUNC(sub_82229F44);
PPC_FUNC_IMPL(__imp__sub_82229F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229F48"))) PPC_WEAK_FUNC(sub_82229F48);
PPC_FUNC_IMPL(__imp__sub_82229F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229F64"))) PPC_WEAK_FUNC(sub_82229F64);
PPC_FUNC_IMPL(__imp__sub_82229F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229F68"))) PPC_WEAK_FUNC(sub_82229F68);
PPC_FUNC_IMPL(__imp__sub_82229F68) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10428(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10428);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,0,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229F7C"))) PPC_WEAK_FUNC(sub_82229F7C);
PPC_FUNC_IMPL(__imp__sub_82229F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229F80"))) PPC_WEAK_FUNC(sub_82229F80);
PPC_FUNC_IMPL(__imp__sub_82229F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10572(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10572, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229FA4"))) PPC_WEAK_FUNC(sub_82229FA4);
PPC_FUNC_IMPL(__imp__sub_82229FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229FA8"))) PPC_WEAK_FUNC(sub_82229FA8);
PPC_FUNC_IMPL(__imp__sub_82229FA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229FB0"))) PPC_WEAK_FUNC(sub_82229FB0);
PPC_FUNC_IMPL(__imp__sub_82229FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10564(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10564, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229FD4"))) PPC_WEAK_FUNC(sub_82229FD4);
PPC_FUNC_IMPL(__imp__sub_82229FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82229FD8"))) PPC_WEAK_FUNC(sub_82229FD8);
PPC_FUNC_IMPL(__imp__sub_82229FD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229FE0"))) PPC_WEAK_FUNC(sub_82229FE0);
PPC_FUNC_IMPL(__imp__sub_82229FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10576, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82229FFC"))) PPC_WEAK_FUNC(sub_82229FFC);
PPC_FUNC_IMPL(__imp__sub_82229FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A000"))) PPC_WEAK_FUNC(sub_8222A000);
PPC_FUNC_IMPL(__imp__sub_8222A000) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A008"))) PPC_WEAK_FUNC(sub_8222A008);
PPC_FUNC_IMPL(__imp__sub_8222A008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10568(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10568, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A02C"))) PPC_WEAK_FUNC(sub_8222A02C);
PPC_FUNC_IMPL(__imp__sub_8222A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A030"))) PPC_WEAK_FUNC(sub_8222A030);
PPC_FUNC_IMPL(__imp__sub_8222A030) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A038"))) PPC_WEAK_FUNC(sub_8222A038);
PPC_FUNC_IMPL(__imp__sub_8222A038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,11580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11580, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A05C"))) PPC_WEAK_FUNC(sub_8222A05C);
PPC_FUNC_IMPL(__imp__sub_8222A05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A060"))) PPC_WEAK_FUNC(sub_8222A060);
PPC_FUNC_IMPL(__imp__sub_8222A060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A06C"))) PPC_WEAK_FUNC(sub_8222A06C);
PPC_FUNC_IMPL(__imp__sub_8222A06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A070"))) PPC_WEAK_FUNC(sub_8222A070);
PPC_FUNC_IMPL(__imp__sub_8222A070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A08C"))) PPC_WEAK_FUNC(sub_8222A08C);
PPC_FUNC_IMPL(__imp__sub_8222A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A090"))) PPC_WEAK_FUNC(sub_8222A090);
PPC_FUNC_IMPL(__imp__sub_8222A090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A09C"))) PPC_WEAK_FUNC(sub_8222A09C);
PPC_FUNC_IMPL(__imp__sub_8222A09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A0A0"))) PPC_WEAK_FUNC(sub_8222A0A0);
PPC_FUNC_IMPL(__imp__sub_8222A0A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A0BC"))) PPC_WEAK_FUNC(sub_8222A0BC);
PPC_FUNC_IMPL(__imp__sub_8222A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A0C0"))) PPC_WEAK_FUNC(sub_8222A0C0);
PPC_FUNC_IMPL(__imp__sub_8222A0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A0CC"))) PPC_WEAK_FUNC(sub_8222A0CC);
PPC_FUNC_IMPL(__imp__sub_8222A0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A0D0"))) PPC_WEAK_FUNC(sub_8222A0D0);
PPC_FUNC_IMPL(__imp__sub_8222A0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A0EC"))) PPC_WEAK_FUNC(sub_8222A0EC);
PPC_FUNC_IMPL(__imp__sub_8222A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A0F0"))) PPC_WEAK_FUNC(sub_8222A0F0);
PPC_FUNC_IMPL(__imp__sub_8222A0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A0FC"))) PPC_WEAK_FUNC(sub_8222A0FC);
PPC_FUNC_IMPL(__imp__sub_8222A0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A100"))) PPC_WEAK_FUNC(sub_8222A100);
PPC_FUNC_IMPL(__imp__sub_8222A100) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10434(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10434, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A114"))) PPC_WEAK_FUNC(sub_8222A114);
PPC_FUNC_IMPL(__imp__sub_8222A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A118"))) PPC_WEAK_FUNC(sub_8222A118);
PPC_FUNC_IMPL(__imp__sub_8222A118) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10434(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10434);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A120"))) PPC_WEAK_FUNC(sub_8222A120);
PPC_FUNC_IMPL(__imp__sub_8222A120) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13220, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A128"))) PPC_WEAK_FUNC(sub_8222A128);
PPC_FUNC_IMPL(__imp__sub_8222A128) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13220);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A130"))) PPC_WEAK_FUNC(sub_8222A130);
PPC_FUNC_IMPL(__imp__sub_8222A130) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwimi r11,r4,23,2,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (ctx.r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,11580(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11580, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A140"))) PPC_WEAK_FUNC(sub_8222A140);
PPC_FUNC_IMPL(__imp__sub_8222A140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11580(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11580);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A14C"))) PPC_WEAK_FUNC(sub_8222A14C);
PPC_FUNC_IMPL(__imp__sub_8222A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A150"))) PPC_WEAK_FUNC(sub_8222A150);
PPC_FUNC_IMPL(__imp__sub_8222A150) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 20;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-10808
	ctx.r9.s64 = ctx.r9.s64 + -10808;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11652(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11652);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r6,r9,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x1;
	// rlwimi r9,r10,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,21,9,10
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x600000) | (ctx.r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r10,21,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11730(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A210"))) PPC_WEAK_FUNC(sub_8222A210);
PPC_FUNC_IMPL(__imp__sub_8222A210) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A240"))) PPC_WEAK_FUNC(sub_8222A240);
PPC_FUNC_IMPL(__imp__sub_8222A240) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11730(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwinm r7,r11,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11730(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11730, ctx.r31.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A2C8"))) PPC_WEAK_FUNC(sub_8222A2C8);
PPC_FUNC_IMPL(__imp__sub_8222A2C8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11730(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11730);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A2D8"))) PPC_WEAK_FUNC(sub_8222A2D8);
PPC_FUNC_IMPL(__imp__sub_8222A2D8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r7,r4,20
	ctx.r7.s64 = ctx.r4.s64 + 20;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-10808
	ctx.r9.s64 = ctx.r9.s64 + -10808;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11652(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11652);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r6,r9,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// rlwimi r9,r10,10,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,19,11,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x180000) | (ctx.r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r10,19,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11730(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A398"))) PPC_WEAK_FUNC(sub_8222A398);
PPC_FUNC_IMPL(__imp__sub_8222A398) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A3C8"))) PPC_WEAK_FUNC(sub_8222A3C8);
PPC_FUNC_IMPL(__imp__sub_8222A3C8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11730(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11730(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11730, ctx.r31.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A44C"))) PPC_WEAK_FUNC(sub_8222A44C);
PPC_FUNC_IMPL(__imp__sub_8222A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A450"))) PPC_WEAK_FUNC(sub_8222A450);
PPC_FUNC_IMPL(__imp__sub_8222A450) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11730(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11730);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A460"))) PPC_WEAK_FUNC(sub_8222A460);
PPC_FUNC_IMPL(__imp__sub_8222A460) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r5,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A49C"))) PPC_WEAK_FUNC(sub_8222A49C);
PPC_FUNC_IMPL(__imp__sub_8222A49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A4A0"))) PPC_WEAK_FUNC(sub_8222A4A0);
PPC_FUNC_IMPL(__imp__sub_8222A4A0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A4B4"))) PPC_WEAK_FUNC(sub_8222A4B4);
PPC_FUNC_IMPL(__imp__sub_8222A4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A4B8"))) PPC_WEAK_FUNC(sub_8222A4B8);
PPC_FUNC_IMPL(__imp__sub_8222A4B8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = ctx.r11.s64 + 1024;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r11.u8 & 0x7F));
	// lbz r11,11730(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11730);
	// rlwinm r7,r11,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (ctx.r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// stb r31,11730(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11730, ctx.r31.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A540"))) PPC_WEAK_FUNC(sub_8222A540);
PPC_FUNC_IMPL(__imp__sub_8222A540) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11730(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11730);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A550"))) PPC_WEAK_FUNC(sub_8222A550);
PPC_FUNC_IMPL(__imp__sub_8222A550) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8222a570
	if (!cr0.eq) goto loc_8222A570;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222a5ac
	if (cr0.eq) goto loc_8222A5AC;
loc_8222A570:
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-10808
	ctx.r10.s64 = ctx.r10.s64 + -10808;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r8,r10,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_8222A5AC:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11652(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11652, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A5B8"))) PPC_WEAK_FUNC(sub_8222A5B8);
PPC_FUNC_IMPL(__imp__sub_8222A5B8) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11652(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11652);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A5C4"))) PPC_WEAK_FUNC(sub_8222A5C4);
PPC_FUNC_IMPL(__imp__sub_8222A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A5C8"))) PPC_WEAK_FUNC(sub_8222A5C8);
PPC_FUNC_IMPL(__imp__sub_8222A5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,26060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26060);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A628"))) PPC_WEAK_FUNC(sub_8222A628);
PPC_FUNC_IMPL(__imp__sub_8222A628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,25148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25148);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A66C"))) PPC_WEAK_FUNC(sub_8222A66C);
PPC_FUNC_IMPL(__imp__sub_8222A66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A670"))) PPC_WEAK_FUNC(sub_8222A670);
PPC_FUNC_IMPL(__imp__sub_8222A670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,24988(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24988);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A6D0"))) PPC_WEAK_FUNC(sub_8222A6D0);
PPC_FUNC_IMPL(__imp__sub_8222A6D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 22;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,26056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A710"))) PPC_WEAK_FUNC(sub_8222A710);
PPC_FUNC_IMPL(__imp__sub_8222A710) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// addi r11,r4,3068
	ctx.r11.s64 = ctx.r4.s64 + 3068;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222a770
	if (cr0.eq) goto loc_8222A770;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// bgt cr6,0x8222a744
	if (cr6.gt) goto loc_8222A744;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8222A744:
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,2,26,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3C) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC3);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_8222A770:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11678(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11678, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A77C"))) PPC_WEAK_FUNC(sub_8222A77C);
PPC_FUNC_IMPL(__imp__sub_8222A77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A780"))) PPC_WEAK_FUNC(sub_8222A780);
PPC_FUNC_IMPL(__imp__sub_8222A780) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11678(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11678);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A78C"))) PPC_WEAK_FUNC(sub_8222A78C);
PPC_FUNC_IMPL(__imp__sub_8222A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A790"))) PPC_WEAK_FUNC(sub_8222A790);
PPC_FUNC_IMPL(__imp__sub_8222A790) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// addi r11,r4,3068
	ctx.r11.s64 = ctx.r4.s64 + 3068;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222a7f0
	if (cr0.eq) goto loc_8222A7F0;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// blt cr6,0x8222a7c4
	if (cr6.lt) goto loc_8222A7C4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8222A7C4:
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,6,22,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3C0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
loc_8222A7F0:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11704(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11704, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A7FC"))) PPC_WEAK_FUNC(sub_8222A7FC);
PPC_FUNC_IMPL(__imp__sub_8222A7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A800"))) PPC_WEAK_FUNC(sub_8222A800);
PPC_FUNC_IMPL(__imp__sub_8222A800) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11704(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A80C"))) PPC_WEAK_FUNC(sub_8222A80C);
PPC_FUNC_IMPL(__imp__sub_8222A80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A810"))) PPC_WEAK_FUNC(sub_8222A810);
PPC_FUNC_IMPL(__imp__sub_8222A810) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A85C"))) PPC_WEAK_FUNC(sub_8222A85C);
PPC_FUNC_IMPL(__imp__sub_8222A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A860"))) PPC_WEAK_FUNC(sub_8222A860);
PPC_FUNC_IMPL(__imp__sub_8222A860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A87C"))) PPC_WEAK_FUNC(sub_8222A87C);
PPC_FUNC_IMPL(__imp__sub_8222A87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A880"))) PPC_WEAK_FUNC(sub_8222A880);
PPC_FUNC_IMPL(__imp__sub_8222A880) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A8B8"))) PPC_WEAK_FUNC(sub_8222A8B8);
PPC_FUNC_IMPL(__imp__sub_8222A8B8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A8CC"))) PPC_WEAK_FUNC(sub_8222A8CC);
PPC_FUNC_IMPL(__imp__sub_8222A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A8D0"))) PPC_WEAK_FUNC(sub_8222A8D0);
PPC_FUNC_IMPL(__imp__sub_8222A8D0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A908"))) PPC_WEAK_FUNC(sub_8222A908);
PPC_FUNC_IMPL(__imp__sub_8222A908) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A91C"))) PPC_WEAK_FUNC(sub_8222A91C);
PPC_FUNC_IMPL(__imp__sub_8222A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A920"))) PPC_WEAK_FUNC(sub_8222A920);
PPC_FUNC_IMPL(__imp__sub_8222A920) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1024, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A958"))) PPC_WEAK_FUNC(sub_8222A958);
PPC_FUNC_IMPL(__imp__sub_8222A958) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 1024);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A96C"))) PPC_WEAK_FUNC(sub_8222A96C);
PPC_FUNC_IMPL(__imp__sub_8222A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A970"))) PPC_WEAK_FUNC(sub_8222A970);
PPC_FUNC_IMPL(__imp__sub_8222A970) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r5,3,27,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A9AC"))) PPC_WEAK_FUNC(sub_8222A9AC);
PPC_FUNC_IMPL(__imp__sub_8222A9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A9B0"))) PPC_WEAK_FUNC(sub_8222A9B0);
PPC_FUNC_IMPL(__imp__sub_8222A9B0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222A9C4"))) PPC_WEAK_FUNC(sub_8222A9C4);
PPC_FUNC_IMPL(__imp__sub_8222A9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222A9C8"))) PPC_WEAK_FUNC(sub_8222A9C8);
PPC_FUNC_IMPL(__imp__sub_8222A9C8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r5,22,5,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r9.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AA04"))) PPC_WEAK_FUNC(sub_8222AA04);
PPC_FUNC_IMPL(__imp__sub_8222AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AA08"))) PPC_WEAK_FUNC(sub_8222AA08);
PPC_FUNC_IMPL(__imp__sub_8222AA08) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AA20"))) PPC_WEAK_FUNC(sub_8222AA20);
PPC_FUNC_IMPL(__imp__sub_8222AA20) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r5,27,0,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AA5C"))) PPC_WEAK_FUNC(sub_8222AA5C);
PPC_FUNC_IMPL(__imp__sub_8222AA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AA60"))) PPC_WEAK_FUNC(sub_8222AA60);
PPC_FUNC_IMPL(__imp__sub_8222AA60) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AA74"))) PPC_WEAK_FUNC(sub_8222AA74);
PPC_FUNC_IMPL(__imp__sub_8222AA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AA78"))) PPC_WEAK_FUNC(sub_8222AA78);
PPC_FUNC_IMPL(__imp__sub_8222AA78) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r5,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AAB4"))) PPC_WEAK_FUNC(sub_8222AAB4);
PPC_FUNC_IMPL(__imp__sub_8222AAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AAB8"))) PPC_WEAK_FUNC(sub_8222AAB8);
PPC_FUNC_IMPL(__imp__sub_8222AAB8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AACC"))) PPC_WEAK_FUNC(sub_8222AACC);
PPC_FUNC_IMPL(__imp__sub_8222AACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AAD0"))) PPC_WEAK_FUNC(sub_8222AAD0);
PPC_FUNC_IMPL(__imp__sub_8222AAD0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r9,r8,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AB14"))) PPC_WEAK_FUNC(sub_8222AB14);
PPC_FUNC_IMPL(__imp__sub_8222AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AB18"))) PPC_WEAK_FUNC(sub_8222AB18);
PPC_FUNC_IMPL(__imp__sub_8222AB18) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AB30"))) PPC_WEAK_FUNC(sub_8222AB30);
PPC_FUNC_IMPL(__imp__sub_8222AB30) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r7,11584(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11584);
	// lwz r4,12376(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12376);
	// lwz r5,12380(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12380);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r8,12384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12384);
	// lwz r9,12388(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12388);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r11,12400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12400, ctx.r11.u32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r10,12404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12404, ctx.r10.u32);
	// stw r31,12408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12408, ctx.r31.u32);
	// stw r30,12412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12412, ctx.r30.u32);
	// beq cr6,0x8222abb8
	if (cr6.eq) goto loc_8222ABB8;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8222ab94
	if (cr6.gt) goto loc_8222AB94;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8222AB94:
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8222aba0
	if (cr6.gt) goto loc_8222ABA0;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8222ABA0:
	// cmpw cr6,r6,r31
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8222abac
	if (cr6.lt) goto loc_8222ABAC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8222ABAC:
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8222abb8
	if (cr6.lt) goto loc_8222ABB8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_8222ABB8:
	// lwz r11,10308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10308);
	// lwz r10,10312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10312);
	// rlwimi r11,r5,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10308, ctx.r11.u32);
	// stw r10,10312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10312, ctx.r10.u32);
	// bl 0x82228618
	ctx.lr = 0x8222ABDC;
	sub_82228618(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222ABF4"))) PPC_WEAK_FUNC(sub_8222ABF4);
PPC_FUNC_IMPL(__imp__sub_8222ABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222ABF8"))) PPC_WEAK_FUNC(sub_8222ABF8);
PPC_FUNC_IMPL(__imp__sub_8222ABF8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8222AC00;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// mr. r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8222ac24
	if (!cr0.eq) goto loc_8222AC24;
	// lwz r9,12184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8222ae18
	if (cr0.eq) goto loc_8222AE18;
loc_8222AC24:
	// lbz r10,10808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8222ac38
	if (cr0.eq) goto loc_8222AC38;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222acc4
	goto loc_8222ACC4;
loc_8222AC38:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222acbc
	if (cr0.eq) goto loc_8222ACBC;
	// lwz r10,12452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222ac54
	if (cr6.eq) goto loc_8222AC54;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222acbc
	if (!cr6.eq) goto loc_8222ACBC;
loc_8222AC54:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222ac6c
	if (cr6.eq) goto loc_8222AC6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222acbc
	if (!cr6.eq) goto loc_8222ACBC;
loc_8222AC6C:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r10,12460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222ac84
	if (cr6.eq) goto loc_8222AC84;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222acbc
	if (!cr6.eq) goto loc_8222ACBC;
loc_8222AC84:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r10,12464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222ac9c
	if (cr6.eq) goto loc_8222AC9C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222acbc
	if (!cr6.eq) goto loc_8222ACBC;
loc_8222AC9C:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r10,12468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222acb4
	if (cr6.eq) goto loc_8222ACB4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222acbc
	if (!cr6.eq) goto loc_8222ACBC;
loc_8222ACB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222acc0
	goto loc_8222ACC0;
loc_8222ACBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222ACC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222ACC4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222acd8
	if (cr0.eq) goto loc_8222ACD8;
	// lwz r11,12900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12900);
	// lwz r8,12904(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12904);
	// b 0x8222acec
	goto loc_8222ACEC;
loc_8222ACD8:
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r9,r11,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_8222ACEC:
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8222ad08
	if (!cr6.lt) goto loc_8222AD08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8222AD08:
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8222ad1c
	if (cr6.lt) goto loc_8222AD1C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8222AD1C:
	// subf r28,r26,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r26.s64;
	// stw r26,12376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12376, ctx.r26.u32);
	// subf r27,r30,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r30,12380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12380, ctx.r30.u32);
	// addi r4,r31,12400
	ctx.r4.s64 = ctx.r31.s64 + 12400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,12384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12384, ctx.r28.u32);
	// stw r27,12388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12388, ctx.r27.u32);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12392, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12396, temp.u32);
	// bl 0x8222ab30
	ctx.lr = 0x8222AD50;
	sub_8222AB30(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r27,32
	ctx.r10.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r9,r26,32
	ctx.r9.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// lfs f0,-2492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2492);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f13,10376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10376, temp.u32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,10380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10380, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10384, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,10388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10388, temp.u32);
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,10392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10392, temp.u32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10396, temp.u32);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_8222AE18:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AE20"))) PPC_WEAK_FUNC(sub_8222AE20);
PPC_FUNC_IMPL(__imp__sub_8222AE20) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2810
	ctx.lr = 0x8222AE28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222ae90
	if (cr6.eq) goto loc_8222AE90;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subfic r11,r29,17
	ctx.xer.ca = ctx.r29.u32 <= 17;
	ctx.r11.s64 = 17 - ctx.r29.s64;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r6,r10,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r10,3
	ctx.r7.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r6,512
	ctx.r10.s64 = ctx.r6.s64 + 512;
	// addi r5,r11,206
	ctx.r5.s64 = ctx.r11.s64 + 206;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,1652(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1652, ctx.r9.u32);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8222AE90:
	// addi r11,r29,3047
	ctx.r11.s64 = ctx.r29.s64 + 3047;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x8222af08
	if (cr0.eq) goto loc_8222AF08;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222aeb8
	if (cr0.eq) goto loc_8222AEB8;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x8222af08
	goto loc_8222AF08;
loc_8222AEB8:
	// lwz r11,10784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10784);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222af08
	if (cr0.eq) goto loc_8222AF08;
	// lwz r11,13152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13152);
	// lwz r3,13148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13148);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222aee0
	if (cr6.lt) goto loc_8222AEE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ecc0
	ctx.lr = 0x8222AEE0;
	sub_8222ECC0(ctx, base);
loc_8222AEE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r10,13148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13148, ctx.r10.u32);
loc_8222AF08:
	// rlwinm. r11,r26,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r30,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r30.u32);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stb r11,12256(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12256, ctx.r11.u8);
	// beq 0x8222af3c
	if (cr0.eq) goto loc_8222AF3C;
	// lbz r10,11552(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11552);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222af3c
	if (cr6.eq) goto loc_8222AF3C;
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8222AF3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828d2860
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222AF44"))) PPC_WEAK_FUNC(sub_8222AF44);
PPC_FUNC_IMPL(__imp__sub_8222AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AF48"))) PPC_WEAK_FUNC(sub_8222AF48);
PPC_FUNC_IMPL(__imp__sub_8222AF48) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3047
	ctx.r11.s64 = ctx.r4.s64 + 3047;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x8222afa4
	if (cr0.eq) goto loc_8222AFA4;
	// subfic r10,r4,223
	ctx.xer.ca = ctx.r4.u32 <= 223;
	ctx.r10.s64 = 223 - ctx.r4.s64;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x8222e868
	ctx.lr = 0x8222AFA4;
	sub_8222E868(ctx, base);
loc_8222AFA4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lbz r11,12256(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12256);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8222AFD4"))) PPC_WEAK_FUNC(sub_8222AFD4);
PPC_FUNC_IMPL(__imp__sub_8222AFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222AFD8"))) PPC_WEAK_FUNC(sub_8222AFD8);
PPC_FUNC_IMPL(__imp__sub_8222AFD8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8222AFE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,12164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12164);
	// cmplwi r30,0
	cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8222b05c
	if (cr0.eq) goto loc_8222B05C;
	// lwz r11,10780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10780);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222b00c
	if (cr0.eq) goto loc_8222B00C;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8222b05c
	goto loc_8222B05C;
loc_8222B00C:
	// lwz r11,10784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10784);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b05c
	if (cr0.eq) goto loc_8222B05C;
	// lwz r11,13152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13152);
	// lwz r3,13148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13148);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222b034
	if (cr6.lt) goto loc_8222B034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ecc0
	ctx.lr = 0x8222B034;
	sub_8222ECC0(ctx, base);
loc_8222B034:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r10,13148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13148, ctx.r10.u32);
loc_8222B05C:
	// stw r29,12164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12164, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222B068"))) PPC_WEAK_FUNC(sub_8222B068);
PPC_FUNC_IMPL(__imp__sub_8222B068) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8222B070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3042
	ctx.r11.s64 = ctx.r4.s64 + 3042;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r5.u32);
	// beq cr6,0x8222b1b0
	if (cr6.eq) goto loc_8222B1B0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x8222b09c
	if (cr6.eq) goto loc_8222B09C;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
loc_8222B09C:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r11,282
	ctx.r8.u64 = ctx.r11.u64 | 282;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,2561
	ctx.r9.s64 = ctx.r9.s64 + 2561;
	// addi r10,r4,2939
	ctx.r10.s64 = ctx.r4.s64 + 2939;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r3.u32);
	// clrldi r9,r11,56
	ctx.r9.u64 = ctx.r11.u64 & 0xFF;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stdx r9,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u64);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// beq 0x8222b1b0
	if (cr0.eq) goto loc_8222B1B0;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r6,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8222b120
	if (cr6.eq) goto loc_8222B120;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8222b120
	if (cr6.eq) goto loc_8222B120;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x8222b120
	if (cr6.eq) goto loc_8222B120;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x8222b1b0
	if (!cr6.eq) goto loc_8222B1B0;
loc_8222B120:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222b1b0
	if (cr0.eq) goto loc_8222B1B0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x8222b13c
	if (cr6.eq) goto loc_8222B13C;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
loc_8222B13C:
	// addi r3,r6,2561
	ctx.r3.s64 = ctx.r6.s64 + 2561;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r29,r8,56
	ctx.r29.u64 = ctx.r8.u64 & 0xFF;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r7,r10,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r30,r10,0,16,11
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// srawi r10,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// srd r3,r3,r29
	ctx.r3.u64 = ctx.r29.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r29.u8 & 0x7F));
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000;
	// or r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 | ctx.r10.u64;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwzx r11,r6,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// ldx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stdx r11,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u64);
loc_8222B1B0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8222b300
	if (!cr6.eq) goto loc_8222B300;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222b1c8
	if (cr6.eq) goto loc_8222B1C8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8222b1d4
	goto loc_8222B1D4;
loc_8222B1C8:
	// lwz r4,12184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x8222b1dc
	if (cr0.eq) goto loc_8222B1DC;
loc_8222B1D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228580
	ctx.lr = 0x8222B1DC;
	sub_82228580(ctx, base);
loc_8222B1DC:
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b2c8
	if (!cr6.eq) goto loc_8222B2C8;
	// lbz r10,10808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b1fc
	if (cr0.eq) goto loc_8222B1FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222b28c
	goto loc_8222B28C;
loc_8222B1FC:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b284
	if (cr0.eq) goto loc_8222B284;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// lwz r9,12452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b21c
	if (cr6.eq) goto loc_8222B21C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b284
	if (!cr6.eq) goto loc_8222B284;
loc_8222B21C:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r9,12456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b234
	if (cr6.eq) goto loc_8222B234;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b284
	if (!cr6.eq) goto loc_8222B284;
loc_8222B234:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r9,12460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b24c
	if (cr6.eq) goto loc_8222B24C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b284
	if (!cr6.eq) goto loc_8222B284;
loc_8222B24C:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r9,12464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b264
	if (cr6.eq) goto loc_8222B264;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b284
	if (!cr6.eq) goto loc_8222B284;
loc_8222B264:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r9,12468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b27c
	if (cr6.eq) goto loc_8222B27C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b284
	if (!cr6.eq) goto loc_8222B284;
loc_8222B27C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222b288
	goto loc_8222B288;
loc_8222B284:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B288:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222B28C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b2c8
	if (cr0.eq) goto loc_8222B2C8;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222b2c8
	if (!cr0.eq) goto loc_8222B2C8;
	// lbz r11,10811(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10811);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222b2c0
	if (!cr0.eq) goto loc_8222B2C0;
	// lbz r11,11849(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11849);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222b2c8
	if (!cr0.eq) goto loc_8222B2C8;
	// lbz r11,11915(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11915);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222b2c8
	if (!cr0.eq) goto loc_8222B2C8;
loc_8222B2C0:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8222b2cc
	goto loc_8222B2CC;
loc_8222B2C8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222B2CC:
	// lbz r9,10808(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// lwz r11,11588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11588);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r9,10808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10808, ctx.r9.u8);
	// lwz r10,12168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// stw r11,11588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11588, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222b2f0
	if (!cr6.eq) goto loc_8222B2F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B2F0:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r11,r10,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10332, ctx.r11.u32);
	// b 0x8222b384
	goto loc_8222B384;
loc_8222B300:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8222b32c
	if (!cr6.eq) goto loc_8222B32C;
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11592);
	// stw r11,11592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11592, ctx.r11.u32);
	// bne cr6,0x8222b320
	if (!cr6.eq) goto loc_8222B320;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B320:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x8222b380
	goto loc_8222B380;
loc_8222B32C:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8222b358
	if (!cr6.eq) goto loc_8222B358;
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11596);
	// stw r11,11596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11596, ctx.r11.u32);
	// bne cr6,0x8222b34c
	if (!cr6.eq) goto loc_8222B34C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B34C:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x8222b380
	goto loc_8222B380;
loc_8222B358:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x8222b390
	if (!cr6.eq) goto loc_8222B390;
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,11600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11600);
	// stw r11,11600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11600, ctx.r11.u32);
	// bne cr6,0x8222b378
	if (!cr6.eq) goto loc_8222B378;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B378:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10332);
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_8222B380:
	// stw r10,10332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10332, ctx.r10.u32);
loc_8222B384:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_8222B390:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222B398"))) PPC_WEAK_FUNC(sub_8222B398);
PPC_FUNC_IMPL(__imp__sub_8222B398) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d281c
	ctx.lr = 0x8222B3A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rldicr r29,r11,49,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,12184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12184, ctx.r30.u32);
	// beq cr6,0x8222b4e0
	if (cr6.eq) goto loc_8222B4E0;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b3d0
	if (!cr6.eq) goto loc_8222B3D0;
	// bl 0x82228580
	ctx.lr = 0x8222B3D0;
	sub_82228580(ctx, base);
loc_8222B3D0:
	// lbz r10,10811(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10811);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,10248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10248, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,10432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10432, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r10,10810(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10810);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,10810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10810, ctx.r10.u8);
	// beq 0x8222b4b8
	if (cr0.eq) goto loc_8222B4B8;
	// lbz r11,10808(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222b410
	if (cr0.eq) goto loc_8222B410;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222b4a0
	goto loc_8222B4A0;
loc_8222B410:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b498
	if (cr0.eq) goto loc_8222B498;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// lwz r10,12452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b430
	if (cr6.eq) goto loc_8222B430;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b498
	if (!cr6.eq) goto loc_8222B498;
loc_8222B430:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b448
	if (cr6.eq) goto loc_8222B448;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b498
	if (!cr6.eq) goto loc_8222B498;
loc_8222B448:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r10,12460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b460
	if (cr6.eq) goto loc_8222B460;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b498
	if (!cr6.eq) goto loc_8222B498;
loc_8222B460:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r10,12464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b478
	if (cr6.eq) goto loc_8222B478;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b498
	if (!cr6.eq) goto loc_8222B498;
loc_8222B478:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r10,12468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b490
	if (cr6.eq) goto loc_8222B490;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b498
	if (!cr6.eq) goto loc_8222B498;
loc_8222B490:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222b49c
	goto loc_8222B49C;
loc_8222B498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B49C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222B4A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b4b8
	if (cr0.eq) goto loc_8222B4B8;
	// lwz r10,10240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10240);
	// lwz r11,12896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12896);
	// rlwimi r10,r11,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,10240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10240, ctx.r10.u32);
loc_8222B4B8:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// b 0x8222b500
	goto loc_8222B500;
loc_8222B4E0:
	// lbz r10,10810(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10810);
	// lwz r11,10432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10432);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,10432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10432, ctx.r11.u32);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10810(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10810, ctx.r10.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_8222B500:
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b5f0
	if (!cr6.eq) goto loc_8222B5F0;
	// lbz r10,10808(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b524
	if (cr0.eq) goto loc_8222B524;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222b5b4
	goto loc_8222B5B4;
loc_8222B524:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b5ac
	if (cr0.eq) goto loc_8222B5AC;
	// lwz r11,12168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	// lwz r9,12452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b544
	if (cr6.eq) goto loc_8222B544;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b5ac
	if (!cr6.eq) goto loc_8222B5AC;
loc_8222B544:
	// lwz r11,12172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12172);
	// lwz r9,12456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b55c
	if (cr6.eq) goto loc_8222B55C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b5ac
	if (!cr6.eq) goto loc_8222B5AC;
loc_8222B55C:
	// lwz r11,12176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12176);
	// lwz r9,12460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12460);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b574
	if (cr6.eq) goto loc_8222B574;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b5ac
	if (!cr6.eq) goto loc_8222B5AC;
loc_8222B574:
	// lwz r11,12180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12180);
	// lwz r9,12464(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12464);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b58c
	if (cr6.eq) goto loc_8222B58C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b5ac
	if (!cr6.eq) goto loc_8222B5AC;
loc_8222B58C:
	// lwz r11,12184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// lwz r9,12468(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12468);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222b5a4
	if (cr6.eq) goto loc_8222B5A4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222b5ac
	if (!cr6.eq) goto loc_8222B5AC;
loc_8222B5A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222b5b0
	goto loc_8222B5B0;
loc_8222B5AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B5B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8222B5B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222b5f0
	if (cr0.eq) goto loc_8222B5F0;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222b5f0
	if (!cr0.eq) goto loc_8222B5F0;
	// lbz r11,10811(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10811);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222b5e8
	if (!cr0.eq) goto loc_8222B5E8;
	// lbz r11,11849(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11849);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222b5f0
	if (!cr0.eq) goto loc_8222B5F0;
	// lbz r11,11915(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11915);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222b5f0
	if (!cr0.eq) goto loc_8222B5F0;
loc_8222B5E8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8222b5f4
	goto loc_8222B5F4;
loc_8222B5F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8222B5F4:
	// lbz r9,10808(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10808);
	// lwz r11,11604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11604);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stb r9,10808(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10808, ctx.r9.u8);
	// lwz r10,12184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// stw r11,11604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11604, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8222b618
	if (!cr6.eq) goto loc_8222B618;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B618:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10420);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,11608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11608);
	// lwz r10,12184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12184);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11608, ctx.r11.u32);
	// bne cr6,0x8222b650
	if (!cr6.eq) goto loc_8222B650;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222B650:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10420);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r10,10420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828d286c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222B678"))) PPC_WEAK_FUNC(sub_8222B678);
PPC_FUNC_IMPL(__imp__sub_8222B678) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x8222B680;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ld r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x8222b72c
	if (cr6.eq) goto loc_8222B72C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8222b6bc
	if (cr6.eq) goto loc_8222B6BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,10432(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10432);
	// bl 0x82233338
	ctx.lr = 0x8222B6B0;
	sub_82233338(ctx, base);
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
loc_8222B6BC:
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222b6ec
	if (cr6.eq) goto loc_8222B6EC;
	// addi r6,r29,10420
	ctx.r6.s64 = ctx.r29.s64 + 10420;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233560
	ctx.lr = 0x8222B6E0;
	sub_82233560(ctx, base);
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
loc_8222B6EC:
	// li r12,31
	ctx.r12.s64 = 31;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// rldicr r12,r12,44,19
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFF00000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222b72c
	if (cr6.eq) goto loc_8222B72C;
	// addi r6,r29,10400
	ctx.r6.s64 = ctx.r29.s64 + 10400;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,15,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 15) & 0xF800000000000000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233560
	ctx.lr = 0x8222B718;
	sub_82233560(ctx, base);
	// li r12,-32
	ctx.r12.s64 = -32;
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
loc_8222B72C:
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8222b7f8
	if (cr6.eq) goto loc_8222B7F8;
	// rlwinm r10,r11,0,9,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFC;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222b76c
	if (cr6.eq) goto loc_8222B76C;
	// addi r6,r29,10316
	ctx.r6.s64 = ctx.r29.s64 + 10316;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,41,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 41) & 0xFFFFF80000000000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233560
	ctx.lr = 0x8222B758;
	sub_82233560(ctx, base);
	// lis r12,-128
	ctx.r12.s64 = -8388608;
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ori r12,r12,3
	ctx.r12.u64 = ctx.r12.u64 | 3;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r11.u64);
loc_8222B76C:
	// lis r12,-128
	ctx.r12.s64 = -8388608;
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// clrldi r12,r12,25
	ctx.r12.u64 = ctx.r12.u64 & 0x7FFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222b7b0
	if (cr6.eq) goto loc_8222B7B0;
	// addi r6,r29,10240
	ctx.r6.s64 = ctx.r29.s64 + 10240;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,25,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 25) & 0xFFFF000000000000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233560
	ctx.lr = 0x8222B798;
	sub_82233560(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,23,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 23) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r11.u64);
loc_8222B7B0:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,39,24
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFF8000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222b7f8
	if (cr6.eq) goto loc_8222B7F8;
	// addi r6,r29,10468
	ctx.r6.s64 = ctx.r29.s64 + 10468;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,4,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 4) & 0xFFFFF80000000000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233560
	ctx.lr = 0x8222B7E0;
	sub_82233560(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r11.u64);
loc_8222B7F8:
	// ld r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8222b830
	if (cr6.eq) goto loc_8222B830;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x8222b830
	if (cr6.eq) goto loc_8222B830;
	// addi r6,r29,10552
	ctx.r6.s64 = ctx.r29.s64 + 10552;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82233560
	ctx.lr = 0x8222B824;
	sub_82233560(ctx, base);
	// ld r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
loc_8222B830:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8222b84c
	if (!cr6.gt) goto loc_8222B84C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82221980
	ctx.lr = 0x8222B848;
	sub_82221980(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8222B84C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16356
	ctx.r8.s64 = -1071906816;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r6,27
	ctx.r6.s64 = 27;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r30,r10,29652
	ctx.r30.s64 = ctx.r10.s64 + 29652;
	// addi r4,r30,4076
	ctx.r4.s64 = ctx.r30.s64 + 4076;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828d2930
	ctx.lr = 0x8222B898;
	sub_828D2930(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// ble cr6,0x8222b8b4
	if (!cr6.gt) goto loc_8222B8B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82221980
	ctx.lr = 0x8222B8B4;
	sub_82221980(ctx, base);
loc_8222B8B4:
	// lis r11,-16374
	ctx.r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x828d2930
	ctx.lr = 0x8222B8E4;
	sub_828D2930(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// stw r4,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r4.u32);
	// ble cr6,0x8222b928
	if (!cr6.gt) goto loc_8222B928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82221980
	ctx.lr = 0x8222B924;
	sub_82221980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8222B928:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82235448
	ctx.lr = 0x8222B930;
	sub_82235448(ctx, base);
	// li r11,8704
	ctx.r11.s64 = 8704;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,8712
	ctx.r7.s64 = 8712;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,8452
	ctx.r5.s64 = 8452;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,8832
	ctx.r31.s64 = 8832;
	// lis r30,8
	ctx.r30.s64 = 524288;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r28,8962
	ctx.r28.s64 = 8962;
	// ori r30,r30,8
	ctx.r30.u64 = ctx.r30.u64 | 8;
	// li r27,4
	ctx.r27.s64 = 4;
	// lis r26,2
	ctx.r26.s64 = 131072;
	// li r25,0
	ctx.r25.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r26,r26,8320
	ctx.r26.u64 = ctx.r26.u64 | 8320;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// li r12,1
	ctx.r12.s64 = 1;
	// ori r23,r23,16
	ctx.r23.u64 = ctx.r23.u64 | 16;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rldicr r12,r12,51,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 51) & 0xFFFFFFFFFFFFFFFF;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r3.u32 = ea;
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,59,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// ld r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std r11,24(r29)
	PPC_STORE_U64(ctx.r29.u32 + 24, ctx.r11.u64);
	// ld r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r11.u64);
	// ld r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.r11.u64);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r30,r11,13824
	ctx.r30.u64 = ctx.r11.u64 | 13824;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r31,r11,129
	ctx.r31.u64 = ctx.r11.u64 | 129;
loc_8222BA54:
	// lwz r27,40(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222ba70
	if (!cr6.gt) goto loc_8222BA70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82221980
	ctx.lr = 0x8222BA6C;
	sub_82221980(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8222BA70:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82220eb0
	ctx.lr = 0x8222BA80;
	sub_82220EB0(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8222bc10
	if (cr0.eq) goto loc_8222BC10;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x828d2890
	ctx.lr = 0x8222BA98;
	sub_828D2890(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// rlwinm r9,r26,0,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x1FFFFFFC;
	// ori r10,r11,18432
	ctx.r10.u64 = ctx.r11.u64 | 18432;
	// rlwinm r11,r26,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xFFF;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// ori r8,r8,30
	ctx.r8.u64 = ctx.r8.u64 | 30;
	// stwu r10,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r27.u32 = ea;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,20480
	ctx.r4.u64 = ctx.r4.u64 | 20480;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// blt cr6,0x8222ba54
	if (cr6.lt) goto loc_8222BA54;
	// lwz r11,10312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10312);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,10308(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10308);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x82228618
	ctx.lr = 0x8222BC08;
	sub_82228618(ctx, base);
loc_8222BC08:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
loc_8222BC10:
	// stw r27,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r27.u32);
	// b 0x8222bc08
	goto loc_8222BC08;
}

__attribute__((alias("__imp__sub_8222BC18"))) PPC_WEAK_FUNC(sub_8222BC18);
PPC_FUNC_IMPL(__imp__sub_8222BC18) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d2800
	ctx.lr = 0x8222BC20;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lwz r11,10560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222bc64
	if (!cr0.eq) goto loc_8222BC64;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f31,-2492(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2492);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8222bc6c
	goto loc_8222BC6C;
loc_8222BC64:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f31,24328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24328);
	ctx.f31.f64 = double(temp.f32);
loc_8222BC6C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8222bc88
	if (!cr6.gt) goto loc_8222BC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82221980
	ctx.lr = 0x8222BC84;
	sub_82221980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8222BC88:
	// mulli r27,r25,21
	ctx.r27.s64 = ctx.r25.s64 * 21;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220eb0
	ctx.lr = 0x8222BC9C;
	sub_82220EB0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8222bcac
	if (!cr0.eq) goto loc_8222BCAC;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// b 0x8222befc
	goto loc_8222BEFC;
loc_8222BCAC:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8222bda4
	if (cr6.eq) goto loc_8222BDA4;
	// addi r11,r24,8
	ctx.r11.s64 = ctx.r24.s64 + 8;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_8222BCE0:
	// lwa r6,-8(r11)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + -8));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwa r8,-4(r11)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + -4));
	// lwa r7,0(r11)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 0));
	// lwa r5,4(r11)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f8,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f7,104(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f30,8(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f8,f7,f31
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f30,36(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f30,64(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bne 0x8222bce0
	if (!cr0.eq) goto loc_8222BCE0;
loc_8222BDA4:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// rlwimi r10,r27,2,6,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r27.u32, 2) & 0x3FFFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFC000003);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// ori r30,r10,20480
	ctx.r30.u64 = ctx.r10.u64 | 20480;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r22,8961
	ctx.r22.s64 = 8961;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// ori r24,r10,8192
	ctx.r24.u64 = ctx.r10.u64 | 8192;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// rlwinm. r10,r29,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// bne 0x8222be40
	if (!cr0.eq) goto loc_8222BE40;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8222be58
	goto loc_8222BE58;
loc_8222BE40:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8222be54
	if (!cr6.eq) goto loc_8222BE54;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// b 0x8222be58
	goto loc_8222BE58;
loc_8222BE54:
	// ori r10,r10,49155
	ctx.r10.u64 = ctx.r10.u64 | 49155;
loc_8222BE58:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r9,8704
	ctx.r9.s64 = 8704;
	// li r8,8712
	ctx.r8.s64 = 8712;
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r10,r10,13825
	ctx.r10.u64 = ctx.r10.u64 | 13825;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r5,17
	ctx.r5.s64 = 17;
	// mullw r6,r25,r6
	ctx.r6.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r6.s32);
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// rlwimi r6,r5,3,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8222BEFC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x828d2850
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8222BF0C"))) PPC_WEAK_FUNC(sub_8222BF0C);
PPC_FUNC_IMPL(__imp__sub_8222BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8222BF10"))) PPC_WEAK_FUNC(sub_8222BF10);
PPC_FUNC_IMPL(__imp__sub_8222BF10) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x828d27f8
	ctx.lr = 0x8222BF18;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm. r11,r25,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222bf50
	if (!cr0.eq) goto loc_8222BF50;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8222bf60
	goto loc_8222BF60;
loc_8222BF50:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// beq cr6,0x8222bf60
	if (cr6.eq) goto loc_8222BF60;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8222BF60:
	// li r11,40
	ctx.r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// slw r10,r10,r24
	ctx.r10.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r24.u8 & 0x3F));
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// divwu r8,r26,r11
	ctx.r8.u32 = ctx.r26.u32 / ctx.r11.u32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r30,r8,r11
	ctx.r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / ctx.r11.u32;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mullw r31,r8,r11
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// twllei r11,0
	// twllei r11,0
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// divwu r9,r7,r10
	ctx.r9.u32 = ctx.r7.u32 / ctx.r10.u32;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// twllei r10,0
	// mullw r23,r9,r10
	ctx.r23.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r22,r11,r10
	ctx.r22.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8222c118
	if (!cr6.lt) goto loc_8222C118;
	// cmpw cr6,r22,r23
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x8222c118
	if (!cr6.lt) goto loc_8222C118;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x8222bfe0
	if (!cr6.gt) goto loc_8222BFE0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_8222BFE0:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8222c010
	if (!cr6.lt) goto loc_8222C010;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r26,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r26.u32);
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
loc_8222C010:
	// cmpw cr6,r22,r28
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x8222c040
	if (!cr6.gt) goto loc_8222C040;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r28,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r28.u32);
	// stwx r30,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r22,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r22.u32);
loc_8222C040:
	// cmpw cr6,r23,r7
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8222c070
	if (!cr6.lt) goto loc_8222C070;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r31,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r23,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r23.u32);
	// stwx r30,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r7,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r7.u32);
loc_8222C070:
	// lwz r28,372(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8222c0a4
	if (cr6.eq) goto loc_8222C0A4;
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8222bc18
	ctx.lr = 0x8222C0A4;
	sub_8222BC18(ctx, base);
loc_8222C0A4:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// sraw r7,r31,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r7.s64 = ctx.r31.s32 >> temp.u32;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwimi r25,r11,17,14,15
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x30000) | (ctx.r25.u64 & 0xFFFFFFFFFFFCFFFF);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// clrlwi r11,r8,18
	ctx.r11.u64 = ctx.r8.u32 & 0x3FFF;
	// sraw r7,r22,r24
	temp.u32 = ctx.r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r22.s32 < 0) & (((ctx.r22.s32 >> temp.u32) << temp.u32) != ctx.r22.s32);
	ctx.r7.s64 = ctx.r22.s32 >> temp.u32;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// srw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r29.u8 & 0x3F));
	// rlwimi r11,r8,0,0,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFC000) | (ctx.r11.u64 & 0xFFFFFFFF00003FFF);
	// sraw r7,r30,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r30.s32 < 0) & (((ctx.r30.s32 >> temp.u32) << temp.u32) != ctx.r30.s32);
	ctx.r7.s64 = ctx.r30.s32 >> temp.u32;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// srw r8,r8,r29
	ctx.r8.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r29.u8 & 0x3F));
	// rlwimi r11,r8,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// sraw r11,r23,r24
	temp.u32 = ctx.r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r23.s32 < 0) & (((ctx.r23.s32 >> temp.u32) << temp.u32) != ctx.r23.s32);
	ctx.r11.s64 = ctx.r23.s32 >> temp.u32;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8222bc18
	ctx.lr = 0x8222C114;
	sub_8222BC18(ctx, base);
	// b 0x8222c154
	goto loc_8222C154;
loc_8222C118:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x8222bc18
	ctx.lr = 0x8222C154;
	sub_8222BC18(ctx, base);
loc_8222C154:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x828d2848
	__restgprlr_20(ctx, base);
	return;
}

