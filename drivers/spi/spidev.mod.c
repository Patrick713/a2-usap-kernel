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
	{ 0x8a331d2b, "param_ops_uint" },
	{ 0xa0337a7f, "no_llseek" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x254652b1, "class_destroy" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xe6d85203, "__class_create" },
	{ 0xc21bb13c, "__register_chrdev" },
	{ 0x2dfdedea, "stream_open" },
	{ 0x691ed760, "spi_slave_abort" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xda800db5, "device_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x5f754e5a, "memset" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x6663995b, "spi_setup" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xebcc8bdd, "put_device" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xde147102, "get_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x2da81bff, "_raw_spin_lock_irq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x13e86e9b, "device_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Cge,achc");
MODULE_ALIAS("of:N*T*Cge,achcC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");

MODULE_INFO(srcversion, "394BE2B2D8B048755F2F434");
