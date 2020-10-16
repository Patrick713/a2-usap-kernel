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
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7b0bdea4, "inet_del_protocol" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0x5d6cd9a7, "inet_add_protocol" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0x62d13089, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A862986F698A06BC8F54BE1");
