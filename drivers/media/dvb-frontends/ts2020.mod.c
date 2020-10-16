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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88161187, "i2c_del_driver" },
	{ 0xfb2b8a14, "regmap_exit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0x1eb64646, "div64_s64" },
	{ 0xeea0399, "strscpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6c4b1218, "__regmap_init_i2c" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe52760d4, "i2c_unregister_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x7e3aa9b7, "i2c_new_device" },
};

MODULE_INFO(depends, "regmap-i2c");

MODULE_ALIAS("i2c:ts2020");
MODULE_ALIAS("i2c:ts2022");

MODULE_INFO(srcversion, "8C2C6AA5DE37BED514B0F74");
