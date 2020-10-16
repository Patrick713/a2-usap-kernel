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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xa7fc046a, "vchi_msg_dequeue" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xda468542, "vchi_bulk_queue_transmit" },
	{ 0x385d429c, "snd_pcm_hw_constraint_step" },
	{ 0x889e7573, "of_parse_phandle" },
	{ 0xaa1a9edd, "snd_pcm_period_elapsed" },
	{ 0x4a43d424, "devres_find" },
	{ 0x347e59c9, "vchi_initialise" },
	{ 0xdaf25f60, "vchi_service_open" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x45a172d0, "vchi_queue_kernel_message" },
	{ 0xfe41fb0b, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc31bbcb8, "snd_pcm_stream_lock" },
	{ 0x7b113694, "devres_alloc_node" },
	{ 0x610b1492, "__platform_driver_register" },
	{ 0x4390690, "vchi_service_use" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x49a7510f, "vchi_disconnect" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5b555848, "snd_pcm_set_ops" },
	{ 0x3c7ad7ac, "of_find_property" },
	{ 0x3ec8e32, "vchi_connect" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9a33d19f, "snd_pcm_lib_free_pages" },
	{ 0x5c88d591, "snd_pcm_lib_ioctl" },
	{ 0x588006d2, "rpi_firmware_property" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xb544d9c, "snd_pcm_lib_malloc_pages" },
	{ 0x4784c007, "vchi_service_close" },
	{ 0xdcaaae74, "snd_card_new" },
	{ 0xcb907ad6, "devm_add_action" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf89d6e83, "snd_pcm_stream_unlock" },
	{ 0xf1d33562, "snd_ctl_new1" },
	{ 0x6ae198f8, "vchi_service_release" },
	{ 0x915b35eb, "devres_add" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xbdafad8, "rpi_firmware_get" },
	{ 0x18bb8ba7, "vchi_get_peer_version" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6fc557c, "snd_pcm_hw_constraint_minmax" },
	{ 0x453495aa, "snd_pcm_stop" },
	{ 0x427f161a, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x952b0e1e, "snd_card_free" },
	{ 0x84e5f73d, "snd_card_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0x883200ae, "snd_pcm_new" },
	{ 0xda621c75, "snd_ctl_add" },
	{ 0x8ad83553, "platform_driver_unregister" },
	{ 0xfc60f402, "of_property_read_variable_u32_array" },
	{ 0xfeb02014, "of_node_put" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-audioC*");

MODULE_INFO(srcversion, "F739C66F5420FE0E7C905DA");
