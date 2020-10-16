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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x4e034328, "smscore_register_hotplug" },
	{ 0xa375dc46, "smscore_get_board_id" },
	{ 0x8bfc7a87, "sms_board_setup" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xffa8bc3b, "dvb_unregister_adapter" },
	{ 0x2eab75ee, "dvb_create_media_graph" },
	{ 0x56850152, "sms_board_event" },
	{ 0x88634ea0, "dvb_register_frontend" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0x5e2113db, "dvb_unregister_frontend" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcc854c32, "param_ops_short" },
	{ 0x63222b29, "smsclient_sendrequest" },
	{ 0x1802e58c, "dvb_dmxdev_release" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x79bf8dcf, "sms_board_lna_control" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x884666dd, "smscore_putbuffer" },
	{ 0x360dd97f, "media_device_cleanup" },
	{ 0x92c359e2, "smscore_unregister_hotplug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x796bc8b2, "dvb_register_adapter" },
	{ 0x78c3bb94, "sms_board_power" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xb8b68b32, "sms_board_led_feedback" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36138fcf, "param_array_ops" },
	{ 0xd99072c3, "smscore_register_client" },
	{ 0x16d05b83, "smscore_get_device_mode" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe6c12171, "complete" },
	{ 0xd83dc5e6, "wait_for_completion_timeout" },
	{ 0xe5efc4f5, "media_device_unregister" },
	{ 0x9345d57b, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "8DA3BAA1B84ED234E2EE6A6");
