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
	{ 0x88161187, "i2c_del_driver" },
	{ 0xbdae2e40, "i2c_register_driver" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8733236, "intlog10" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x1c062251, "__i2c_transfer" },
	{ 0x7fa795f, "_dev_err" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x2ce5182e, "i2c_mux_add_adapter" },
	{ 0x28f70f7f, "i2c_mux_alloc" },
	{ 0x61a8140e, "__regmap_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x12a38747, "usleep_range" },
	{ 0xae2c61e9, "regmap_read" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc73c0dfd, "regmap_write" },
	{ 0x30ddcad4, "regmap_bulk_write" },
	{ 0xe4f477be, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf0cacea3, "regmap_bulk_read" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb2b8a14, "regmap_exit" },
	{ 0xa9644ec2, "i2c_mux_del_adapters" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "dvb-core,i2c-mux");

MODULE_ALIAS("i2c:af9013");

MODULE_INFO(srcversion, "80BC6F842727F6BA551C9AA");
