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
	{ 0x9a152689, "param_ops_int" },
	{ 0xbbc4b581, "w1_unregister_family" },
	{ 0xd7b783a3, "w1_register_family" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0xd95a2cd, "device_create_file" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xd5ec15ad, "w1_touch_bit" },
	{ 0x208d5b9e, "w1_next_pullup" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x84b183ae, "strncmp" },
	{ 0x480a268d, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x163de26f, "w1_read_block" },
	{ 0xab43c867, "w1_read_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xacccdef1, "w1_write_8" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53368e08, "w1_write_block" },
	{ 0x79f462eb, "w1_reset_bus" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "A1F3ACA3353A0AF94899A5C");
