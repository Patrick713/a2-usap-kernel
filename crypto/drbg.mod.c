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
	{ 0x4f5d19af, "crypto_unregister_rngs" },
	{ 0x453fb07f, "crypto_register_rngs" },
	{ 0x58067247, "crypto_alloc_rng" },
	{ 0xbb16792b, "add_random_ready_callback" },
	{ 0x71c90087, "memcmp" },
	{ 0xc5850110, "printk" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x19ae5859, "crypto_alloc_shash" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd599adb2, "del_random_ready_callback" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd6994983, "crypto_shash_setkey" },
	{ 0x7493254d, "crypto_shash_final" },
	{ 0x693f465b, "crypto_shash_update" },
	{ 0x7a4497db, "kzfree" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "17182A597341647F87D6EE1");
