#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcd34ce55, "single_open" },
	{ 0xd944b325, "drm_mode_config_cleanup" },
	{ 0x7238966a, "regulator_disable" },
	{ 0xc08d08ec, "drm_atomic_helper_connector_reset" },
	{ 0xed9f15e8, "dma_set_mask" },
	{ 0xf7c048ae, "single_release" },
	{ 0x5d7776e5, "seq_puts" },
	{ 0x6f0e794d, "drm_helper_probe_single_connector_modes" },
	{ 0xc8275115, "seq_printf" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x2973ebce, "drm_dev_fini" },
	{ 0x392872de, "drm_fb_memcpy" },
	{ 0xdc0adda3, "seq_read" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x346e15fb, "dma_set_coherent_mask" },
	{ 0xab700540, "drm_connector_cleanup" },
	{ 0xd9e29757, "drm_simple_display_pipe_init" },
	{ 0xf96c3c62, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xa33ab01d, "drm_mode_copy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc30bb8d9, "drm_mode_duplicate" },
	{ 0x8fc729b0, "drm_gem_fb_get_obj" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6154269c, "drm_fb_swab16" },
	{ 0x1bec828c, "drm_gem_fb_create_with_dirty" },
	{ 0x3ba5ba7e, "drm_atomic_helper_damage_merged" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x49566053, "drm_connector_init" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0xd6299020, "dma_buf_begin_cpu_access" },
	{ 0x95c1e520, "drm_dev_printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3f5ef96b, "drm_atomic_helper_connector_destroy_state" },
	{ 0xfe9afa35, "drm_atomic_helper_check" },
	{ 0xf16ad84b, "drm_atomic_helper_commit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0xeac60591, "drm_crtc_send_vblank_event" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x167c65ac, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x12be653a, "drm_mode_probed_add" },
	{ 0x12e6824d, "dma_buf_end_cpu_access" },
	{ 0xaafc0c00, "drm_plane_enable_fb_damage_clips" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xa6436d08, "drm_dev_enter" },
	{ 0x63106ada, "drm_fb_xrgb8888_to_rgb565" },
	{ 0x67b83f59, "regulator_enable" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");


MODULE_INFO(srcversion, "21DDC0E5D6780DEBA566D41");
