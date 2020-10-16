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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x93b18eee, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x675ce85, "regmap_raw_write" },
	{ 0xe03d9e8f, "regmap_multi_reg_write" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x56d6d809, "snd_soc_bytes_tlv_callback" },
	{ 0x4c5fbb88, "snd_soc_component_disable_pin" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9b6be1fe, "debugfs_create_x32" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x999e8297, "vfree" },
	{ 0x7c20652d, "debugfs_create_file" },
	{ 0x35edc130, "debugfs_remove_recursive" },
	{ 0x738f3a77, "devm_kasprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa6eb2cd, "snd_soc_add_component_controls" },
	{ 0x52368709, "regmap_async_complete" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x81febe09, "simple_open" },
	{ 0x7c86f79c, "debugfs_create_bool" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcc16e32, "devm_kstrdup" },
	{ 0xbce4c93e, "snd_soc_dapm_sync" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x8603930b, "regmap_raw_write_async" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x7a16358, "regmap_raw_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4b0ea8ef, "snd_compr_stop_error" },
	{ 0x904ac03b, "snd_soc_component_force_enable_pin" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x8b6486ce, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-core,snd-compress");


MODULE_INFO(srcversion, "0F6FB743B08E91AFA0FEA52");
