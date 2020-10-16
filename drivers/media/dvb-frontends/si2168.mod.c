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
	{ 0x7fa795f, "_dev_err" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xd7c5fc2f, "_dev_notice" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x2ce5182e, "i2c_mux_add_adapter" },
	{ 0x28f70f7f, "i2c_mux_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcb203516, "i2c_transfer_buffer_flags" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9644ec2, "i2c_mux_del_adapters" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "5D564406F00A6C6C1B136D6");
