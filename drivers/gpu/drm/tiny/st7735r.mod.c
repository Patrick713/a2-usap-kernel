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
	{ 0x5c2bc381, "mipi_dbi_debugfs_init" },
	{ 0x93241da6, "mipi_dbi_release" },
	{ 0xb89ceedf, "drm_release" },
	{ 0xc2f0d3b0, "drm_open" },
	{ 0x63cd7716, "drm_gem_cma_mmap" },
	{ 0x1a894e71, "drm_ioctl" },
	{ 0xb135d519, "drm_poll" },
	{ 0xd9108b57, "drm_read" },
	{ 0x36ac7fd0, "noop_llseek" },
	{ 0x1b08f5a9, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x1953bf70, "mipi_dbi_pipe_update" },
	{ 0xb6d23fe, "mipi_dbi_pipe_disable" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x95c1e520, "drm_dev_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x384f8b83, "drm_fbdev_generic_setup" },
	{ 0x47a8b3df, "drm_dev_register" },
	{ 0xcfab2e80, "drm_mode_config_reset" },
	{ 0x71798926, "mipi_dbi_dev_init" },
	{ 0x492b3164, "mipi_dbi_spi_init" },
	{ 0x6ff4c298, "device_property_read_u32_array" },
	{ 0x44a84985, "devm_of_find_backlight" },
	{ 0x76d0d88f, "devm_gpiod_get" },
	{ 0xf8646a8d, "drm_mode_config_init" },
	{ 0x1c96d08, "devm_drm_dev_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x6182b5f, "mipi_dbi_enable_flush" },
	{ 0x39cb96f8, "mipi_dbi_command_stackbuf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x41e662d5, "mipi_dbi_poweron_reset" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xa6436d08, "drm_dev_enter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x772311e4, "drm_dev_unplug" },
	{ 0xc30face8, "drm_atomic_helper_shutdown" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "drm,drm_mipi_dbi,drm_kms_helper,backlight");

MODULE_ALIAS("spi:jd-t18003-t01");
MODULE_ALIAS("of:N*T*Cjianda,jd-t18003-t01");
MODULE_ALIAS("of:N*T*Cjianda,jd-t18003-t01C*");

MODULE_INFO(srcversion, "9162B78F2F04293798CC193");
