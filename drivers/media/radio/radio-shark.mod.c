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
	{ 0x183c8383, "usb_deregister" },
	{ 0x7a8b7baa, "usb_register_driver" },
	{ 0x9783aa95, "v4l2_device_put" },
	{ 0x465d3152, "snd_tea575x_exit" },
	{ 0x7fe02901, "v4l2_device_disconnect" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x79727164, "led_classdev_unregister" },
	{ 0xf3b91b92, "snd_tea575x_init" },
	{ 0xeea0399, "strscpy" },
	{ 0x4f91b42f, "v4l2_device_register" },
	{ 0x760a7600, "led_classdev_register_ext" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x30e40628, "v4l2_device_set_name" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfde8a122, "usb_interrupt_msg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b9d7ce, "v4l2_device_unregister" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf29c084, "snd_tea575x_set_freq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "videodev,tea575x");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "A2D17FB56137A7A22C79EDC");
