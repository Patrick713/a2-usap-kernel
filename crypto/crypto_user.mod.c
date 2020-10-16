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
	{ 0xa7b3181c, "up_read" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7ed5fd24, "crypto_mod_put" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0xc869fd2c, "crypto_remove_spawns" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x65465214, "skb_trim" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2a5c13b5, "crypto_mod_get" },
	{ 0x5f754e5a, "memset" },
	{ 0x65e2bb05, "unregister_pernet_subsys" },
	{ 0x3f151d75, "netlink_kernel_release" },
	{ 0xcea2e594, "crypto_unregister_instance" },
	{ 0xe56f25dd, "netlink_rcv_skb" },
	{ 0xa5c2e213, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf918f903, "netlink_unicast" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xb1b7cd97, "netlink_capable" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xb041ec8d, "register_pernet_subsys" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5e031234, "__netlink_kernel_create" },
	{ 0x35e02677, "crypto_alg_mod_lookup" },
	{ 0x47317949, "crypto_alg_sem" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x94499ccd, "__nlmsg_put" },
	{ 0x143ab15f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "149505CC0DEAF6469642C4D");
