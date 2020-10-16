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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xfb10e0b7, "drm_gem_cma_dumb_create" },
	{ 0x4987ab5d, "drm_gem_prime_mmap" },
	{ 0x3f38942c, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0x4a177993, "drm_gem_prime_fd_to_handle" },
	{ 0xfdb8d38c, "drm_gem_prime_handle_to_fd" },
	{ 0xb8272eb9, "drm_cma_gem_create_object_default_funcs" },
	{ 0xb89ceedf, "drm_release" },
	{ 0xc2f0d3b0, "drm_open" },
	{ 0x63cd7716, "drm_gem_cma_mmap" },
	{ 0x1a894e71, "drm_ioctl" },
	{ 0xb135d519, "drm_poll" },
	{ 0xd9108b57, "drm_read" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x1b08f5a9, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x3f5ef96b, "drm_atomic_helper_connector_destroy_state" },
	{ 0xf96c3c62, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xab700540, "drm_connector_cleanup" },
	{ 0x6f0e794d, "drm_helper_probe_single_connector_modes" },
	{ 0xc08d08ec, "drm_atomic_helper_connector_reset" },
	{ 0xf16ad84b, "drm_atomic_helper_commit" },
	{ 0xfe9afa35, "drm_atomic_helper_check" },
	{ 0x1bec828c, "drm_gem_fb_create_with_dirty" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x5dc31eaa, "gpiod_get_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x12e6824d, "dma_buf_end_cpu_access" },
	{ 0xf222794c, "drm_fb_xrgb8888_to_gray8" },
	{ 0xd6299020, "dma_buf_begin_cpu_access" },
	{ 0xe916e5ea, "thermal_zone_get_temp" },
	{ 0xa6436d08, "drm_dev_enter" },
	{ 0xf64eb997, "drm_fb_cma_get_gem_obj" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0xeac60591, "drm_crtc_send_vblank_event" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x3ba5ba7e, "drm_atomic_helper_damage_merged" },
	{ 0xd653b126, "sched_clock" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x84b498ef, "gpiod_set_value_cansleep" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a098af9, "thermal_zone_get_zone_by_name" },
	{ 0x384f8b83, "drm_fbdev_generic_setup" },
	{ 0x47a8b3df, "drm_dev_register" },
	{ 0xcfab2e80, "drm_mode_config_reset" },
	{ 0xd9e29757, "drm_simple_display_pipe_init" },
	{ 0x49566053, "drm_connector_init" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0xcb6ba75f, "device_property_read_string" },
	{ 0x5192d47f, "spi_get_device_id" },
	{ 0x95c1e520, "drm_dev_printk" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xf8646a8d, "drm_mode_config_init" },
	{ 0x1c96d08, "devm_drm_dev_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x346e15fb, "dma_set_coherent_mask" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xed9f15e8, "dma_set_mask" },
	{ 0x3884d478, "of_match_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x2973ebce, "drm_dev_fini" },
	{ 0xd944b325, "drm_mode_config_cleanup" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x12be653a, "drm_mode_probed_add" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0xc30bb8d9, "drm_mode_duplicate" },
	{ 0x772311e4, "drm_dev_unplug" },
	{ 0xc30face8, "drm_atomic_helper_shutdown" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "DCE22FE386A77C9AA01E15A");
